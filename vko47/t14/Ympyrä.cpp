#include "Ympyrä.h"
#include <cmath>

Ympyrä::Ympyrä():sade_(1)
{
}

Ympyrä::Ympyrä(double sade):sade_(sade)
{
}

Ympyrä::Ympyrä(const Ympyrä& alkup):sade_(alkup.sade_)
{
}

Ympyrä::~Ympyrä()
{
}

Ympyrä& Ympyrä::operator=(const Ympyrä& alkup)
{
	if (this != &alkup) {
		sade_ = alkup.sade_;
	}
	return *this;
}

double Ympyrä::annaSade() const
{
	return sade_;;
}

void Ympyrä::asetaSade(double sade)
{
	sade_ = sade;
}

double Ympyrä::pintaAla() const
{
	return 4 * atan(1.0) * sade_ * sade_;
}

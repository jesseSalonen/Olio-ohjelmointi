#include "Ympyr�.h"
#include <cmath>

Ympyr�::Ympyr�():sade_(1)
{
}

Ympyr�::Ympyr�(double sade):sade_(sade)
{
}

Ympyr�::Ympyr�(const Ympyr�& alkup):sade_(alkup.sade_)
{
}

Ympyr�::~Ympyr�()
{
}

Ympyr�& Ympyr�::operator=(const Ympyr�& alkup)
{
	if (this != &alkup) {
		sade_ = alkup.sade_;
	}
	return *this;
}

double Ympyr�::annaSade() const
{
	return sade_;;
}

void Ympyr�::asetaSade(double sade)
{
	sade_ = sade;
}

double Ympyr�::pintaAla() const
{
	return 4 * atan(1.0) * sade_ * sade_;
}

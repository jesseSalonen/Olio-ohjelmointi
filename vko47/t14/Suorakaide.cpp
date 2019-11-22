#include "Suorakaide.h"

Suorakaide::Suorakaide():kanta_(1), korkeus_(1)
{
}

Suorakaide::Suorakaide(double kanta, double korkeus): kanta_(kanta), korkeus_(korkeus)
{
}

Suorakaide::Suorakaide(const Suorakaide& alkup): kanta_(alkup.kanta_), korkeus_(alkup.korkeus_)
{
}

Suorakaide::~Suorakaide()
{
}

Suorakaide& Suorakaide::operator=(const Suorakaide& alkup)
{
	if (this != &alkup) {
		kanta_ = alkup.kanta_;
		korkeus_ = alkup.korkeus_;
	}
	return *this;
}

double Suorakaide::annaKanta() const
{
	return kanta_;
}

double Suorakaide::annaKorkeus() const
{
	return korkeus_;
}

void Suorakaide::asetaKanta(double kanta)
{
	kanta_ = kanta;
}

void Suorakaide::asetaKorkeus(double korkeus)
{
	korkeus_ = korkeus;
}

double Suorakaide::pintaAla() const
{
	return kanta_ * korkeus_;
}

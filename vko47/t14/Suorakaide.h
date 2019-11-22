#pragma once
#include "Kuvio.h"
class Suorakaide :
	public Kuvio
{
public:
	Suorakaide();
	Suorakaide(double kanta, double korkeus);
	Suorakaide(const Suorakaide& alkup);
	~Suorakaide();
	Suorakaide& operator=(const Suorakaide& alkup);
	double annaKanta() const;
	double annaKorkeus() const;
	void asetaKanta(double kanta);
	void asetaKorkeus(double korkeus);
	double pintaAla() const;
	
	

private:
	double kanta_;
	double korkeus_;
};


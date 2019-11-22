#pragma once
#include "Kuvio.h"
class Ympyr� :
	public Kuvio
{
public:
	Ympyr�();
	Ympyr�(double sade);
	Ympyr�(const Ympyr�& alkup);
	~Ympyr�();
	Ympyr�& operator= (const Ympyr�& alkup);
	double annaSade() const;
	void asetaSade(double sade);
	double pintaAla() const;

private:
	double sade_;
};


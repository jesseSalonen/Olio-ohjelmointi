#pragma once
#include "Kuvio.h"
class Ympyrä :
	public Kuvio
{
public:
	Ympyrä();
	Ympyrä(double sade);
	Ympyrä(const Ympyrä& alkup);
	~Ympyrä();
	Ympyrä& operator= (const Ympyrä& alkup);
	double annaSade() const;
	void asetaSade(double sade);
	double pintaAla() const;

private:
	double sade_;
};


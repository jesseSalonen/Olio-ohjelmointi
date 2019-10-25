#pragma once
#include "Tyontekija.h"
class Opettaja :
	public Tyontekija
{
public:
	Opettaja();
	Opettaja(const string& etunimi, const string& sukunimi, const string& osoite, const string& puhelinnumero,
		const string& palkka, const string& tunnus, const string& opetusala);
	Opettaja(const Opettaja& alkup);
	~Opettaja();

	Opettaja& operator=(const Opettaja& opet);
	string annaOpetusala() const;
	void asetaOpetusala(const string& opetusala);
	void kysyTiedot();
	void tulosta() const;
private:
	string opetusala_;

};


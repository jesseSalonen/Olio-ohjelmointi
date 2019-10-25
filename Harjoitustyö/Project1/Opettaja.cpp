#include <iostream>
#include "Opettaja.h"

using std::cout; using std::cin; using std::endl;
Opettaja::Opettaja(): Tyontekija(), opetusala_()
{
	cout << "Opettajan oletusrakentaja." << endl;
}

Opettaja::Opettaja(const string& etunimi, const string& sukunimi, const string& osoite, const string& puhelinnumero,
	const string& palkka, const string& tunnus, const string& opetusala):
	Tyontekija(etunimi, sukunimi, osoite, puhelinnumero, palkka, tunnus), opetusala_(opetusala)
{
	cout << "Opettajan param. rak." << endl;
}

Opettaja::Opettaja(const Opettaja& alkup): Tyontekija(alkup), opetusala_(alkup.opetusala_)
{
	cout << "Opettajan kopio rak." << endl;
}

Opettaja::~Opettaja()
{
	cout << "Opettajan purkaja." << endl;
}

Opettaja& Opettaja::operator=(const Opettaja& opet)
{
	if (this != &opet) {
		Tyontekija::operator=(opet);
		opetusala_ = opet.opetusala_;
	}
	return *this;
}

string Opettaja::annaOpetusala() const
{
	return opetusala_;
}

void Opettaja::asetaOpetusala(const string& opetusala)
{
	opetusala_ = opetusala;
}

void Opettaja::kysyTiedot()
{
	Tyontekija::kysyTiedot();
	cout << "Anna opetusala: ";
	getline(cin, opetusala_);
}

void Opettaja::tulosta() const
{
	Tyontekija::tulosta();
	cout << opetusala_ << endl;
}

#include <iostream>
#include "Tyontekija.h"

using std::endl; using std::cin; using std::cout;
Tyontekija::Tyontekija(): Henkilo(), palkka_(), tunnus_()
{	
}

Tyontekija::Tyontekija(const string& etunimi, const string& sukunimi, const string& osoite, const string& puhelinnumero,
	const string& palkka, const string& tunnus): Henkilo(etunimi, sukunimi, osoite, puhelinnumero), 
	palkka_(palkka), tunnus_(tunnus)
{
}

Tyontekija::Tyontekija(const Tyontekija& alkup): Henkilo(alkup), palkka_(alkup.palkka_), tunnus_(alkup.tunnus_)
{
}

Tyontekija::~Tyontekija()
{
}

Tyontekija& Tyontekija::operator=(const Tyontekija& tyont)
{
	if (this != &tyont) {
		Henkilo::operator=(tyont);
		tunnus_ = tyont.tunnus_;
		palkka_ = tyont.palkka_;
	}
	return *this;
}

string Tyontekija::annaPalkka() const
{
	return palkka_;
}

string Tyontekija::annaTunnus() const
{
	return tunnus_;
}

void Tyontekija::asetaPalkka(const string& palkka)
{
	palkka_ = palkka;
}

void Tyontekija::asetaTunnus(const string& tunnus)
{
	tunnus_ = tunnus;
}

void Tyontekija::kysyTiedot()
{
	Henkilo::kysyTiedot();
	cout << "Anna palkka: ";
	getline(cin, palkka_);
	cout << "Anna tunnus: ";
	getline(cin, tunnus_);
}

void Tyontekija::tulosta() const
{
	Henkilo::tulosta();
	cout << palkka_ << " " << tunnus_ << " ";
}

#include <iostream>
#include "Opiskelija.h"


using std::cin; using std::cout; using std::endl;

Opiskelija::Opiskelija(): Henkilo(), opiskelijanumero_()
{
}

Opiskelija::Opiskelija(const string& etunimi, const string& sukunimi,
	const string& osoite, const string& puhelinnumero, const string& opiskelijanumero):
	Henkilo(etunimi, sukunimi, osoite, puhelinnumero), opiskelijanumero_(opiskelijanumero)
{
}

Opiskelija::Opiskelija(const Opiskelija& alkup): Henkilo(alkup),
opiskelijanumero_(alkup.opiskelijanumero_)
{
}

Opiskelija::~Opiskelija()
{
}

string Opiskelija::annaOpiskelijanumero()
{
	return opiskelijanumero_;
}

void Opiskelija::asetaOpiskelijanumero(const string& opiskelijanumero)
{
	opiskelijanumero_ = opiskelijanumero;
}

void Opiskelija::tulosta() const
{
	Henkilo::tulosta();
	cout << opiskelijanumero_ << endl;
}

void Opiskelija::kysyTiedot()
{
	Henkilo::kysyTiedot();
	cout << "Anna opiskelijanumero: ";
	getline(cin, opiskelijanumero_);
}

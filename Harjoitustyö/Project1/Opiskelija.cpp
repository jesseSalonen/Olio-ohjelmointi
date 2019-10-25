#include <iostream>
#include "Opiskelija.h"


using std::cin; using std::cout; using std::endl;

Opiskelija::Opiskelija(): Henkilo(), opiskelijanumero_()
{
	cout << "Opiskelijan oletusrakentaja." << endl;
}

Opiskelija::Opiskelija(const string& etunimi, const string& sukunimi,
	const string& osoite, const string& puhelinnumero, const string& opiskelijanumero):
	Henkilo(etunimi, sukunimi, osoite, puhelinnumero), opiskelijanumero_(opiskelijanumero)
{
	cout << "Opiskelijan param. rak." << endl;
}

Opiskelija::Opiskelija(const Opiskelija& alkup): Henkilo(alkup),
opiskelijanumero_(alkup.opiskelijanumero_)
{
	cout << "Opiskelijan kopio rak." << endl;
}

Opiskelija::~Opiskelija()
{
	cout << "Opiskelijan purkaja." << endl;
}

Opiskelija& Opiskelija::operator=(const Opiskelija& opisk)
{
	if (this != &opisk) {
		Henkilo::operator= (opisk);
		opiskelijanumero_ = opisk.opiskelijanumero_;
	}
	return *this;
}

string Opiskelija::annaOpiskelijanumero() const
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

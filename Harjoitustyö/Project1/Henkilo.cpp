#include <iostream>
#include "Henkilo.h"


using std::cin; using std::cout; using std::endl;

Henkilo::Henkilo(): etunimi_(), sukunimi_(), osoite_(), puhelinnumero_()
{
	cout << "Henkilon oletusrakentaja." << endl;
}

Henkilo::Henkilo(const string& etunimi, const string& sukunimi, const string& osoite, const string& puhelinnumero):
	etunimi_(etunimi), sukunimi_(sukunimi), osoite_(osoite), puhelinnumero_(puhelinnumero)
{
	cout << "Henkilon param. rak." << endl;
}

Henkilo::Henkilo(const Henkilo& alkup): etunimi_(alkup.etunimi_), sukunimi_(alkup.sukunimi_), osoite_(alkup.osoite_),
puhelinnumero_(alkup.puhelinnumero_)
{
	cout << "Henkilon kopio rak." << endl;
}

Henkilo::~Henkilo()
{
	cout << "Henkilon purkaja." << endl;
}

string Henkilo::annaEtunimi() const
{
	return etunimi_;
}

string Henkilo::annaSukunimi() const
{
	return sukunimi_;
}

string Henkilo::annaOsoite() const
{
	return osoite_;
}

string Henkilo::annaPuhelinnumero() const
{
	return puhelinnumero_;
}

void Henkilo::asetaEtunimi(const string& etunimi)
{
	etunimi_ = etunimi;
}

void Henkilo::asetaSukunimi(const string& sukunimi)
{
	sukunimi_ = sukunimi;
}

void Henkilo::asetaOsoite(const string& osoite)
{
	osoite_ = osoite;
}

void Henkilo::asetaPuhelinnumero(const string& puhelinnumero)
{
	puhelinnumero_ = puhelinnumero;
}

void Henkilo::tulosta() const
{
	cout << etunimi_ << " " << sukunimi_ << " " << osoite_ << " " << puhelinnumero_ << " ";
}

void Henkilo::kysyTiedot()
{
	cout << "Anna etunimi: ";
	getline(cin, etunimi_);

	cout << "Anna sukunimi: ";
	getline(cin, sukunimi_);

	cout << "Anna osoite: ";
	getline(cin, osoite_);

	cout << "Anna puhelinnumero: ";
	getline(cin, puhelinnumero_);

}

#include <iostream>
#include "Koulutusohjelma.h"

using std::cout; using std::cin; using std::endl;
Koulutusohjelma::Koulutusohjelma(): nimi_(), opiskelijat_(), opettajat_()
{
}

Koulutusohjelma::Koulutusohjelma(const string & nimi): nimi_(nimi), opiskelijat_(), opettajat_()
{
}


Koulutusohjelma::~Koulutusohjelma()
{
}

string Koulutusohjelma::annaNimi() const
{
	return nimi_;
}

void Koulutusohjelma::asetaNimi(const string & nimi)
{
	nimi_ = nimi;
}

unsigned int Koulutusohjelma::OpettajienMaara() const
{
	return opettajat_.size();
}

unsigned int Koulutusohjelma::OpiskelijoidenMaara() const
{
	return opiskelijat_.size();
}

string Koulutusohjelma::annaOpettajanEtunimi(unsigned int y) const
{
	return opettajat_[y].annaEtunimi();
}

string Koulutusohjelma::annaOpettajanSukunimi(unsigned int y) const
{
	return opettajat_[y].annaSukunimi();
}

string Koulutusohjelma::annaOpettajanOsoite(unsigned int y) const
{
	return opettajat_[y].annaOsoite();
}

string Koulutusohjelma::annaOpettajanPuhelinnumero(unsigned int y) const
{
	return opettajat_[y].annaPuhelinnumero();
}

string Koulutusohjelma::annaOpettajanPalkka(unsigned int y) const
{
	return opettajat_[y].annaPalkka();
}

string Koulutusohjelma::annaOpettajanTunnus(unsigned int y) const
{
	return opettajat_[y].annaTunnus();
}

string Koulutusohjelma::annaOpettajanOpetusala(unsigned int y) const
{
	return opettajat_[y].annaOpetusala();
}

string Koulutusohjelma::annaOpiskelijanEtunimi(unsigned int y) const
{
	return opiskelijat_[y].annaEtunimi();
}

string Koulutusohjelma::annaOpiskelijanSukunimi(unsigned int y) const
{
	return opiskelijat_[y].annaSukunimi();
}

string Koulutusohjelma::annaOpiskelijanOsoite(unsigned int y) const
{
	return opiskelijat_[y].annaOsoite();
}

string Koulutusohjelma::annaOpiskelijanPuhelinnumero(unsigned int y) const
{
	return opiskelijat_[y].annaPuhelinnumero();
}

string Koulutusohjelma::annaOpiskelijanumero(unsigned int y) const
{
	return opiskelijat_[y].annaOpiskelijanumero();
}

void Koulutusohjelma::lisaaOpettaja()
{
	Opettaja temp;
	temp.kysyTiedot();
	opettajat_.push_back(temp);

}

void Koulutusohjelma::lisaaOpettajaParam(const string& etunimi, const string& sukunimi, 
	const string& osoite, const string& puhelinnumero, const string& palkka, const string& tunnus, const string& opetusala)		//tiedostosta lukemista varten tehty opettaja-olion luominen parametreilla.
{
	opettajat_.push_back(Opettaja(etunimi, sukunimi, osoite, puhelinnumero, palkka, tunnus, opetusala));
}

void Koulutusohjelma::lisaaOpiskelija()
{
	Opiskelija temp;
	temp.kysyTiedot();
	opiskelijat_.push_back(temp);

}

void Koulutusohjelma::lisaaOpiskelijaParam(const string& etunimi, const string& sukunimi,							//tiedostosta lukemista varten tehty opiskelija-olion luominen parametreilla.
	const string& osoite, const string& puhelinnumero, const string& opiskelijanumero)
{
	opiskelijat_.push_back(Opiskelija(etunimi, sukunimi, osoite, puhelinnumero, opiskelijanumero));
}

void Koulutusohjelma::tulostaOpettajat() const
{
	for (unsigned int i = 0; i < opettajat_.size(); i++) {

		opettajat_[i].tulosta();
	}
}

void Koulutusohjelma::tulostaOpiskelijat() const
{
	for (unsigned int i = 0; i < opiskelijat_.size(); i++) {

		opiskelijat_[i].tulosta();
	}
}

void Koulutusohjelma::poistaOpettaja(unsigned int y)
{
	opettajat_.erase(opettajat_.begin() + y);
}

void Koulutusohjelma::poistaOpiskelija(unsigned int y)
{
	opiskelijat_.erase(opiskelijat_.begin() + y);
}

void Koulutusohjelma::paivitaOpettaja(unsigned int y)
{
	opettajat_[y].kysyTiedot();
}

void Koulutusohjelma::paivitaOpiskelija(unsigned int y)
{
	opiskelijat_[y].kysyTiedot();
}

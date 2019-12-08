#pragma once
#include <string>
#include <vector>
#include "Opettaja.h"
#include "Opiskelija.h"

using std::string; using std::vector;

class Koulutusohjelma
{
public:
	Koulutusohjelma();
	Koulutusohjelma(const string& nimi);
	~Koulutusohjelma();

	string annaNimi() const;
	void asetaNimi(const string& nimi);

	unsigned int OpettajienMaara() const;
	unsigned int OpiskelijoidenMaara() const;

	string annaOpettajanEtunimi(unsigned int y) const;
	string annaOpettajanSukunimi(unsigned int y) const;
	string annaOpettajanOsoite(unsigned int y) const;
	string annaOpettajanPuhelinnumero(unsigned int y) const;
	string annaOpettajanPalkka(unsigned int y) const;
	string annaOpettajanTunnus(unsigned int y) const;
	string annaOpettajanOpetusala(unsigned int y) const;
	string annaOpiskelijanEtunimi(unsigned int y) const;
	string annaOpiskelijanSukunimi(unsigned int y) const;
	string annaOpiskelijanOsoite(unsigned int y) const;
	string annaOpiskelijanPuhelinnumero(unsigned int y) const;
	string annaOpiskelijanumero(unsigned int y) const;

	void lisaaOpettaja();
	void lisaaOpettajaParam(const string& etunimi, const string& sukunimi, const string& osoite, 
		const string& puhelinnumero,const string& palkka, const string& tunnus, const string& opetusala);
	void lisaaOpiskelija();
	void lisaaOpiskelijaParam(const string& etunimi, const string& sukunimi, const string& osoite, 
		const string& puhelinnumero,const string& opiskelijanumero);

	void tulostaOpettajat() const;
	void tulostaOpiskelijat() const;

	void poistaOpettaja(unsigned int y);
	void poistaOpiskelija(unsigned int y);

	void paivitaOpettaja(unsigned int y);
	void paivitaOpiskelija(unsigned int y);

private:

	string nimi_;

	vector <Opiskelija> opiskelijat_;
	vector <Opettaja> opettajat_;
};


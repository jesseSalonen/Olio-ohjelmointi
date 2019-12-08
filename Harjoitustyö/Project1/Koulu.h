#pragma once
#include <string>
#include "Koulutusohjelma.h"

using std::string; using std::vector;
class Koulu
{
public:
	Koulu();
	Koulu(const string& nimi);
	~Koulu();

	string annaNimi() const;
	void asetaNimi(const string& nimi);

	void lisaaKoulutusohjelma();
	void tulostaKoulutusohjelmat() const;
	
	void tulostaKoulutusohjelmienMaara() const;
	
	void lisaaKoulutusohjelmaanOpettaja();
	void tulostaKoulutusohjelmanOpettajat() const;
	
	void lisaaKoulutusohjelmaanOpiskelija();
	void tulostaKoulutusohjelmanOpiskelijat() const;

	void poistaKoulutusohjelma();
	void poistaOpettaja();
	void poistaOpiskelija();

	void paivitaKoulutusohjelmanNimi();
	void paivitaOpettajanTiedot();
	void paivitaOpiskelijanTiedot();

	void kirjoitaTiedostoon() const;
	void lueTiedostosta();

private:
	string nimi_;
	vector <Koulutusohjelma> koulutusohjelmat_;

};


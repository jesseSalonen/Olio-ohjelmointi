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


private:
	string nimi_;
	vector <Koulutusohjelma> koulutusohjelmat_;

};


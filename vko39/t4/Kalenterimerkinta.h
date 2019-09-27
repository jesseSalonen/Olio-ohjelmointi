#pragma once
#include <string>
#include "Paivays.h"
#include "Kello.h"

using std::string;
class Kalenterimerkinta
{
public:
	Kalenterimerkinta();
	Kalenterimerkinta(Paivays pvm, Kello klo, const string& asia, bool muistutus);
	Kalenterimerkinta(const Kalenterimerkinta& alkup);
	~Kalenterimerkinta();

	Paivays annaPvm();
	Kello annaKlo();
	string annaAsia();
	bool annaMuistutus();

	void asetaPvm(Paivays pvm);
	void asetaKlo(Kello klo);
	void asetaAsia(const string& asia);
	void asetaMuistutus(bool muistutus);

	void tulosta();
	void kysyTiedot();

private:
	Paivays pvm_;
	Kello klo_;
	string asia_;
	bool muistutus_;
};


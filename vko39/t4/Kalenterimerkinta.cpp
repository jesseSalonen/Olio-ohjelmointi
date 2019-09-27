#include "Kalenterimerkinta.h"
#include <iostream>

using std::endl; using std::cout; using std::cin;
Kalenterimerkinta::Kalenterimerkinta():pvm_(), klo_(), asia_(), muistutus_(false)
{
}

Kalenterimerkinta::Kalenterimerkinta(Paivays pvm, Kello klo, const string& asia, bool muistutus):
	pvm_(pvm), klo_(klo), asia_(asia), muistutus_(muistutus)
{
}

Kalenterimerkinta::Kalenterimerkinta(const Kalenterimerkinta& alkup):
	pvm_(alkup.pvm_), klo_(alkup.klo_), asia_(alkup.asia_), muistutus_(alkup.muistutus_)
{
}

Kalenterimerkinta::~Kalenterimerkinta()
{
}

Paivays Kalenterimerkinta::annaPvm()
{
	return pvm_;
}

Kello Kalenterimerkinta::annaKlo()
{
	return klo_;
}

string Kalenterimerkinta::annaAsia()
{
	return asia_;
}

bool Kalenterimerkinta::annaMuistutus()
{
	return muistutus_;
}

void Kalenterimerkinta::asetaPvm(Paivays pvm)
{
	// pvm_ = pvm; Ei sallittu koska Paivays luokassa ei ole sij. oper.
	pvm_.asetaPaiva(pvm.annaPaiva());
	pvm_.asetaKuukausi(pvm.annaKuukausi());
	pvm_.asetaVuosi(pvm.annaVuosi());
}

void Kalenterimerkinta::asetaKlo(Kello klo)
{
	klo_.asetaAika(klo.annaTunnit(), klo.annaMinuutit(), klo.annaSekunnit());
}

void Kalenterimerkinta::asetaAsia(const string& asia)
{
	asia_ = asia;  //sallitu, koska string-luokkaan on tot. sij. oper.
}

void Kalenterimerkinta::asetaMuistutus(bool muistutus)
{
	muistutus_ = muistutus;
}

void Kalenterimerkinta::tulosta()
{
	cout << "**********************" << endl;
	pvm_.tulosta();
	klo_.tulostaAika();
	cout << asia_ << endl;
	if (muistutus_)
		cout << "Muistutus paalla " << endl;
	else
		cout << "Ei muistutusta " << endl;
	cout << "**********************" << endl;
}

void Kalenterimerkinta::kysyTiedot()
{
	char muistutus;

	pvm_.kysyPaivays();
	klo_.kysyAika();
	cout << "Anna asia: ";
	getline(cin, asia_);
	cout << "Asetetaanko muistutus?(k/e) ";
	cin >> muistutus;
	
	if (muistutus == 'k')
		muistutus_ = true;
	else
		muistutus_ = false;


}

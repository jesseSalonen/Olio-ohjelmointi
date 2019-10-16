#include <iostream>
#include "Koulu.h"


int main() {
	Koulu TAMK("TAMK");
	TAMK.lisaaKoulutusohjelma();
	TAMK.tulostaKoulutusohjelmat();

	TAMK.lisaaKoulutusohjelmaanOpettaja();
	TAMK.lisaaKoulutusohjelmaanOpiskelija();
	TAMK.lisaaKoulutusohjelmaanOpiskelija();

	TAMK.tulostaKoulutusohjelmienMaara();
	TAMK.tulostaKoulutusohjelmat();
	TAMK.tulostaKoulutusohjelmanOpettajat();
	TAMK.tulostaKoulutusohjelmanOpiskelijat();
	
	return 0;
	
}
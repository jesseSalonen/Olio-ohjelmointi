#include <iostream>
#include "Kello.h"
using std::endl; using std::cout;

int main() {

	Kello aika;
	Kello aika1(23, 15, 44);
	Kello aika2(aika1);
	
	aika.tulostaAika();
	aika1.tulostaAika();
	aika2.tulostaAika();

	aika.asetaAika(14, 49, 12);
	aika.tulostaAika();
	

	return 0;
}
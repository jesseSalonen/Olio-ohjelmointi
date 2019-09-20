#include <iostream>
#include "Kello.h"
using std::endl; using std::cout;

int main() {

	Kello aika;
	Kello aika1(23, 15, 44);
	
	aika.tulostaAika();
	aika1.tulostaAika();

	aika.asetaAika(14, 49, 12);
	aika.tulostaAika();
	

	return 0;
}
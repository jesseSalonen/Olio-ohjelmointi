#include <iostream>
#include "Kello.h"
using std::endl; using std::cout;

int main() {

	Kello aika;
	Kello syoteAika;

	aika.asetaAika(14, 49, 12);
	aika.tulostaAika();
	
	syoteAika.kysyAika();
	syoteAika.tulostaAika();

	cout << "Lisataan sekunti..." << endl;
	syoteAika.lisaaSekunti();

	syoteAika.tulostaAika();

	return 0;
}
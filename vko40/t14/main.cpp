#include <iostream>
#include "Opiskelija.h"
#include "Opettaja.h"


int main() {
	
	Henkilo h("Ossi", "Opiskelija", "Katu 2", "34543543");

	h.tulosta();
	h.kysyTiedot();
	h.tulosta();

	Opiskelija o("Ossi", "Opiskelija", "Katu 2", "3558437534", "98932");
	o.tulosta();
	o.kysyTiedot();
	o.tulosta();
	
	return 0;
	
}
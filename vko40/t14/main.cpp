#include <iostream>
#include "Opiskelija.h"
#include "Opettaja.h"


int main() {
	
	Henkilo h1("Ossi", "Opiskelija", "Katu 2", "34543543");

	Henkilo h2;

	Henkilo h3(h1);

	h1.tulosta();
	h2.tulosta();
	h3.tulosta();
	

	Opiskelija o1("Ossi", "Opiskelija", "Katu 2", "3558437534", "98932");
	
	Opiskelija o2;

	Opiskelija o3(o1);

	o1.tulosta();
	o2.tulosta();
	o3.tulosta();

	Tyontekija t1("Ossi", "Opiskelija", "Katu 2", "34543543", "4000", "1234");

	Tyontekija t2;

	Tyontekija t3(t1);

	t1.tulosta();
	t2.tulosta();
	t3.tulosta();

	Opettaja op1("Ossi", "Opiskelija", "Katu 2", "34543543", "4000", "1234", "luonnontieteet");

	Opettaja op2;

	Opettaja op3(op1);

	op1.tulosta();
	op2.tulosta();
	op3.tulosta();
	
	return 0;
	
}
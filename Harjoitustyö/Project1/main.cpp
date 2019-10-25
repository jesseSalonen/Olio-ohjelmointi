#include <iostream>
#include "Koulu.h"


int main() {
	Opettaja o1;
	Opettaja o2("1", "2", "3", "4", "5", "6", "7");
	
	o1 = o2 = o1;
	o1.tulosta();

	Opiskelija op1;
	Opiskelija op2("5", "4", "3", "2", "1");

	op1 = op2;
	op1.tulosta();
	return 0;
	
}
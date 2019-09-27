#include <iostream>
#include "Paivays.h"
using std::endl; using std::cout;

int main() {

	Paivays eilen;
	Paivays huomenna(21, 9, 2019);
	Paivays tanaan(huomenna);
	
	huomenna.tulosta();
	tanaan.tulosta();

	return 0;
}
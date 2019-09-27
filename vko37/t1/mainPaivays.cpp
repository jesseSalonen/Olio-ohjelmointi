#include <iostream>
#include "Paivays.h"
using std::endl; using std::cout;

int main() {

	Paivays eilen;
	Paivays huomenna(30, 11, 2019);
	Paivays tanaan(huomenna);
	
	huomenna.tulosta();
	tanaan.tulosta();

	tanaan.lisaaPaiva();
	tanaan.tulosta();

	return 0;
}
#include <iostream>
#include "Paivays.h"
using std::endl; using std::cout;

int main() {

	Paivays tanaan;
	Paivays huomenna(21, 9, 2019);
	
	tanaan.tulosta();
	huomenna.tulosta();

	return 0;
}
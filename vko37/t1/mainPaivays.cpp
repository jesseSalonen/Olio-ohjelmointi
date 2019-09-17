#include <iostream>
#include "Paivays.h"
using std::endl; using std::cout;

int main() {

	Paivays tanaan;
	tanaan.asetaPaiva(17);
	tanaan.asetaKuukausi(9);
	tanaan.asetaVuosi(2019);
	
	Paivays huomenna;
	huomenna.asetaPaiva(18);
	huomenna.asetaKuukausi(9);
	huomenna.asetaVuosi(2019);

	tanaan.tulosta();
	huomenna.tulosta();

	

	return 0;
}
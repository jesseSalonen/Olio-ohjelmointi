#include <iostream>
#include "Paivays.h"
using std::endl; using std::cout;

int main() {

	Paivays tanaan;
	tanaan.asetaPaiva(13);
	tanaan.asetaKuukausi(9);
	tanaan.asetaVuosi(2019);

	tanaan.tulosta();

	return 0;
}
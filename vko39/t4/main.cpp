#include "Kalenterimerkinta.h"

int main() {

	Kalenterimerkinta km(Paivays(27,9,2019), Kello(13,54,22), "kay kaupassa", true);
	Kalenterimerkinta km1(km);
	Kalenterimerkinta km3;
	km.tulosta();
	km1.tulosta();
	km3.tulosta();

	return 0;
}
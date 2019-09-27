#include "Kalenterimerkinta.h"

int main() {

	Kalenterimerkinta km(Paivays(27,9,2019), Kello(13,54,22), "kay kaupassa", true);
	km.tulosta();

	return 0;
}
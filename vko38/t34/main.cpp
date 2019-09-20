#include "Murtoluku.h"

int main() {

	Murtoluku ml1;
	Murtoluku ml2(458,600);

	ml1.tulosta();
	ml1.kysyTiedot();
	ml1.tulosta();

	ml2.tulosta();
	ml2.sievenna();
	ml2.tulosta();

	return 0;
}
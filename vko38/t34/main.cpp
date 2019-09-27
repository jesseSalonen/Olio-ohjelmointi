#include "Murtoluku.h"

int main() {

	Murtoluku ml1;
	Murtoluku ml2(45883647,6004943873);

	ml1.tulosta();
	ml1.kysyTiedot();
	ml1.tulosta();

	ml2.tulosta();
	ml2.sievenna();
	ml2.tulosta();

	return 0;
}
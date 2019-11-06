#include <iostream>
#include "Paivays.h"
using std::endl; using std::cout;

int main() {
	try {
		Paivays tanaan(-6, 12, 2019);
		tanaan.tulosta();
	}
	catch (const std::runtime_error& e) {
		cout << "Virhe: " << e.what() << endl;
	}
	catch (...) {

	}
	
	

	return 0;
}
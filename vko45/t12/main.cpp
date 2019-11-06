#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl; using std::vector; using std::cerr;

int main() {
	
	vector <int> luvut;

	luvut.push_back(1);
	luvut.push_back(2);
	luvut.push_back(7);

	try {
		cout << luvut.at(-2) << endl;
	}
	catch (const std::out_of_range & e) {
		cerr << "Virheellinen indeksointi! " << endl;
	}
	catch (const std::exception& e){
		cerr << "Virhe! " << e.what() << endl;
	}
	catch (...) {
		cerr << "Virhe! " << endl;
	}
	
	return 0;
}
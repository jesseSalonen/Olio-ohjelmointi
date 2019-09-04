#include <iostream>

using std::cout; using std::endl;

int main() {

	double lukemat[6] = {7.8, 8.1, 8.05, 7.7, 7.9, 8.21};
	cout << "Normikulutuslukemat (l/100km) ovat:" << endl;

	for (int x = 0; x <= 5; x++) {
		cout << x + 1 << ". Lukema: " << lukemat[x] << endl;

	}



}
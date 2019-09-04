#include <iostream>
using std::cout; using std::cin; using std::endl;

int main() {

	int arvosanat[6] = { 0 };
	int arvosana = 0;
	int oppilaat = 0;
	double keskiarvo = 0;
	
	while (arvosana >= 0) {

		cout << "Anna arvosana: ";
		cin >> arvosana;

		oppilaat++;

		for (int x = 0; x <= 5; x++) {

			if (arvosana == x) {
				arvosanat[x]++;
				x = 6;

			}
		}
	}

	oppilaat--;

	for (int x = 0; x <= 5; x++) {
		keskiarvo = keskiarvo + x * arvosanat[x];
	}
	keskiarvo = keskiarvo / oppilaat;

	cout << "Arvosana Lkm Histogrammi" << endl;

	for (int x = 0; x <= 5; x++) {

		cout << x << " " << arvosanat[x] << " ";

		for (int y = 1; y <= arvosanat[x]; y++) {

			cout << "*";

		}

		cout << endl;

	}

	cout << "Opiskelijoita: " << oppilaat << ", keskiarvo: " << keskiarvo << endl;
}
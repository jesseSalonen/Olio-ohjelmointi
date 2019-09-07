#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout; using std::cin; using std::endl;

int main() {

	const int SIZE = 7;
	const int SIZE2 = 39;
	int correct = 0;
	int numbers[SIZE];
	int array1[SIZE];
	int array2[SIZE2];
	int lotteryNumber;

	for (int x = 0; x <= 6; x++) {
		cout << "Anna lottonumero(1-39): ";
		cin >> numbers[x];
	}
	

	for (int x = 0; x <= 38; x++) {
		array2[x] = x + 1;
	}

	for (int x = 0; x <= 6; x++) {
		srand(time(NULL));
		lotteryNumber = rand() % (38 - x);
		array1[x] = array2[lotteryNumber];
		array2[lotteryNumber] = array2[38 - x];
	}

	for (int x = 0; x <= 6; x++) {

		for (int y = 0; y <= 6; y++) {
			if (numbers[x] == array1[y]) correct++;
		}
		
	}

	for (int x = 0; x <= 6; x++) {
		cout << array1[x] << " ";
	}

	cout << endl;

	cout << "Oikeiden numeroiden maara: " << correct << endl;
}
#include <iostream>
#include "Suorakaide.h"
#include "Ympyrä.h"

using std::cout; using std::endl;

int main() {
	
	//Kuvio k;
	Suorakaide s(2, 3);
	Ympyrä y(10);
	Kuvio* y_p = &y;
	Kuvio* s_p = new Suorakaide(4, 5);

	//cout << k.pintaAla() << endl;
	cout << s.pintaAla() << endl;
	cout << y.pintaAla() << endl;

	cout << y_p->pintaAla() << endl;
	cout << s_p->pintaAla() << endl;


	delete s_p;
	s_p = 0;
		
	return 0;
}
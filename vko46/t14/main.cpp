#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Opettaja.h"

using std::cout; using std::ofstream; using std::ifstream; using std::endl; using std::vector; using std::string;

int main() {

	vector <Opettaja> opettajat_k;
	opettajat_k.push_back(Opettaja("Keke", "Kodaaja", "Katu 2", "1213232", "kekek", "5600", "kodaus"));
	opettajat_k.push_back(Opettaja("Jaana", "Janari", "Insinöörikatu", "35436546", "jaanaj", "5800", "hoitsu"));
	opettajat_k.push_back(Opettaja("Janne", "Tapio", "Raum 87", "gfdgfdg", "tapsa", "2000", "fysik"));

	for (unsigned int i = 0; i < opettajat_k.size(); i++) {
		opettajat_k[i].tulosta();
	}

	ofstream tied_k;
	tied_k.open("opettaja.csv");
	if (tied_k.is_open()) {
		for (unsigned int i = 0; i < opettajat_k.size(); i++) {
			tied_k << opettajat_k[i].annaEtunimi() << ";"
				<< opettajat_k[i].annaSukunimi() << ";"
				<< opettajat_k[i].annaOsoite() << ";"
				<< opettajat_k[i].annaPuhelinnumero() << ";"
				<< opettajat_k[i].annaTunnus() << ";"
				<< opettajat_k[i].annaPalkka() << ";"
				<< opettajat_k[i].annaOpetusala() << endl;
		}
	}
	else
		cout << "Tiedosto ei aukea!" << endl;

	tied_k.close();


	ifstream tied_l;
	vector <Opettaja> opettajat_l;
	string etunimi, sukunimi, osoite, puhelinnumero, tunnus, palkka, opetusala;
	tied_l.open("opettaja.csv");
	if (tied_l.is_open()) {
		while (tied_l.peek() != EOF) {
			getline(tied_l, etunimi, ';');
			getline(tied_l, sukunimi, ';');
			getline(tied_l, osoite, ';');
			getline(tied_l, puhelinnumero, ';');
			getline(tied_l, tunnus, ';');
			getline(tied_l, palkka, ';');
			getline(tied_l, opetusala);
			opettajat_l.push_back(Opettaja(etunimi, sukunimi, osoite, puhelinnumero, tunnus, palkka, opetusala));
		}
	}
	else
		cout << "Tiedosto ei aukea!" << endl;

	tied_l.close();

	for (unsigned int i = 0; i < opettajat_k.size(); i++) {
		opettajat_l[i].tulosta();
	}

	return 0;
}
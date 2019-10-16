#include <iostream>
#include "Koulu.h"


using std::cout; using std::cin; using std::endl;

Koulu::Koulu(): nimi_(), koulutusohjelmat_()
{
}

Koulu::Koulu(const string& nimi): nimi_(nimi), koulutusohjelmat_()
{
}

Koulu::~Koulu()
{
}

string Koulu::annaNimi() const
{
	return nimi_;
}

void Koulu::asetaNimi(const string& nimi)
{
	nimi_ = nimi;
}

void Koulu::lisaaKoulutusohjelma()
{
	string temp1;
	cout << "Anna koulutusohjelman nimi: ";
	getline(cin, temp1);
	Koulutusohjelma temp(temp1);
	koulutusohjelmat_.push_back(temp);
}

void Koulu::tulostaKoulutusohjelmat() const
{
	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {

		cout << koulutusohjelmat_[i].annaNimi() << endl;
	}
}

void Koulu::tulostaKoulutusohjelmienMaara() const
{
	cout << "Koulutusohjelmien maara on: " << koulutusohjelmat_.size() << endl;
}

void Koulu::lisaaKoulutusohjelmaanOpettaja()
{
	while (1) {
		cout << "Mihin koulutusohjelmaan haluat lisata opettajan?" << endl;
		string temp;
		getline(cin, temp);
		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				koulutusohjelmat_[i].lisaaOpettaja();
				return;
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}

void Koulu::tulostaKoulutusohjelmanOpettajat() const
{
	while (1) {
		cout << "Minka koulutusohjelman opettajat haluat tulostaa?" << endl;
		string temp;
		getline(cin, temp);
		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				koulutusohjelmat_[i].tulostaOpettajat();
				return;
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}

void Koulu::lisaaKoulutusohjelmaanOpiskelija()
{
	while (1) {
		cout << "Mihin koulutusohjelmaan haluat lisata opiskelijan?" << endl;
		string temp;
		getline(cin, temp);
		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				koulutusohjelmat_[i].lisaaOpiskelija();
				return;
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}

void Koulu::tulostaKoulutusohjelmanOpiskelijat() const
{
	while (1) {
		cout << "Minka koulutusohjelman opiskelijat haluat tulostaa?" << endl;
		string temp;
		getline(cin, temp);
		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				koulutusohjelmat_[i].tulostaOpiskelijat();
				return;
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}

#include <iostream>
#include <fstream>
#include "Koulu.h"
#include <string>



using std::cout; using std::cin; using std::endl;
using std::ofstream; using std::ifstream; using std::string;

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
	koulutusohjelmat_.push_back(Koulutusohjelma(temp1));
}

void Koulu::tulostaKoulutusohjelmat() const
{
	cout << "Koulutusohjelmat:" << endl;
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
		try {
			tulostaKoulutusohjelmat();
			if (koulutusohjelmat_.size() == 0) {			//try-catch rakennetta käytetty estämään koulutusohjelmien käsittely ennen kuin niitä on luotu. Tästä eteenpäin kaikissa metodeissa aluksi tarkastetaan tämä, jonka jälkeen
				throw 1;									//kysytään käyttäjältä mitä koulutusohjelmaa halutaan käsitellä.
			}
		}
		catch (int e) {
			cout << "Koulutusohjelmia ei ole viela lisattu!" << endl;
			return;
		}
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
		try {
			tulostaKoulutusohjelmat();
			if (koulutusohjelmat_.size() == 0) {
				throw 1;
			}
		}
		catch (int e) {
			cout << "Koulutusohjelmia ei ole viela lisattu!" << endl;
			return;
		}
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
		try {
			tulostaKoulutusohjelmat();
			if (koulutusohjelmat_.size() == 0) {
				throw 1;
			}
		}
		catch (int e) {
			cout << "Koulutusohjelmia ei ole viela lisattu!" << endl;
			return;
		}
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
		try {
			tulostaKoulutusohjelmat();
			if (koulutusohjelmat_.size() == 0) {
				throw 1;
			}
		}
		catch (int e) {
			cout << "Koulutusohjelmia ei ole viela lisattu!" << endl;
			return;
		}
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

void Koulu::poistaKoulutusohjelma()
{
	while (1) {
		try {
			tulostaKoulutusohjelmat();
			if (koulutusohjelmat_.size() == 0) {
				throw 1;
			}
		}
		catch (int e) {
			cout << "Koulutusohjelmia ei ole viela lisattu!" << endl;
			return;
		}
		cout << "Minka koulutusohjelman haluat poistaa?" << endl;
		string temp;
		getline(cin, temp);
		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				koulutusohjelmat_.erase(koulutusohjelmat_.begin() + i);
				return;
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}

void Koulu::poistaOpettaja()
{
	while (1) {
		try {
			tulostaKoulutusohjelmat();
			if (koulutusohjelmat_.size() == 0) {
				throw 1;
			}
		}
		catch (int e) {
			cout << "Koulutusohjelmia ei ole viela lisattu!" << endl;
			return;
		}
		cout << "Mista koulutusohjelmasta haluat poistaa opettajan?" << endl;
		string temp;
		getline(cin, temp);
		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				koulutusohjelmat_[i].tulostaOpettajat();
				while (1) {
					string temp1;
					cout << "Anna poistettavan opettajan tunnus:";
					getline(cin, temp1);
					for (unsigned int y = 0; y < koulutusohjelmat_[i].OpettajienMaara(); y++) {
						if (koulutusohjelmat_[i].annaOpettajanTunnus(y).compare(temp1) == 0) {
							koulutusohjelmat_[i].poistaOpettaja(y);
							return;
						}
					}
					cout << "Annettua tunnusta ei loytynyt." << endl;
				}
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}

void Koulu::poistaOpiskelija()
{
	while (1) {
		try {
			tulostaKoulutusohjelmat();
			if (koulutusohjelmat_.size() == 0) {
				throw 1;
			}
		}
		catch (int e) {
			cout << "Koulutusohjelmia ei ole viela lisattu!" << endl;
			return;
		}
		cout << "Mista koulutusohjelmasta haluat poistaa opiskelijan?" << endl;
		string temp;
		getline(cin, temp);
		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				koulutusohjelmat_[i].tulostaOpiskelijat();
				while (1) {
					string temp1;
					cout << "Anna poistettavan opiskelijan opiskelijanumero:";
					getline(cin, temp1);
					for (unsigned int y = 0; y < koulutusohjelmat_[i].OpiskelijoidenMaara(); y++) {
						if (koulutusohjelmat_[i].annaOpiskelijanumero(y).compare(temp1) == 0) {
							koulutusohjelmat_[i].poistaOpiskelija(y);
							return;
						}
					}
					cout << "Annettua opiskelijanumeroa ei loytynyt." << endl;
				}
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}

void Koulu::paivitaKoulutusohjelmanNimi()
{
	while (1) {
		try {
			tulostaKoulutusohjelmat();
			if (koulutusohjelmat_.size() == 0) {
				throw 1;
			}
		}
		catch (int e) {
			cout << "Koulutusohjelmia ei ole viela lisattu!" << endl;
			return;
		}
		cout << "Minka koulutusohjelman nimen haluat muuttaa?" << endl;
		string temp;
		getline(cin, temp);
		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				string temp1;
				cout << "Anna koulutusohjelman uusi nimi:";
				getline(cin, temp1);
				koulutusohjelmat_[i].asetaNimi(temp1);
				return;
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}

void Koulu::paivitaOpettajanTiedot()
{
	while (1) {
		try {
			tulostaKoulutusohjelmat();
			if (koulutusohjelmat_.size() == 0) {
				throw 1;
			}
		}
		catch (int e) {
			cout << "Koulutusohjelmia ei ole viela lisattu!" << endl;
			return;
		}
		cout << "Minka koulutusohjelman opettajan tietoja haluat muuttaa?" << endl;
		string temp;
		getline(cin, temp);
		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				koulutusohjelmat_[i].tulostaOpettajat();
				while (1) {
					string temp1;
					cout << "Anna paivitettavan opettajan tunnus:";
					getline(cin, temp1);
					for (unsigned int y = 0; y < koulutusohjelmat_[i].OpettajienMaara(); y++) {
						if (koulutusohjelmat_[i].annaOpettajanTunnus(y).compare(temp1) == 0) {
							koulutusohjelmat_[i].paivitaOpettaja(y);
							return;
						}
					}
					cout << "Annettua tunnusta ei loytynyt." << endl;
				}
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}

void Koulu::paivitaOpiskelijanTiedot()
{
	while (1) {
		try {
			tulostaKoulutusohjelmat();
			if (koulutusohjelmat_.size() == 0) {
				throw 1;
			}
		}
		catch (int e) {
			cout << "Koulutusohjelmia ei ole viela lisattu!" << endl;
			return;
		}
		cout << "Minka koulutusohjelman opiskelijan tietoja haluat muuttaa?" << endl;
		string temp;
		getline(cin, temp);
		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				koulutusohjelmat_[i].tulostaOpiskelijat();
				while (1) {
					string temp1;
					cout << "Anna paivitettavan opiskelijan opiskelijanumero:";
					getline(cin, temp1);
					for (unsigned int y = 0; y < koulutusohjelmat_[i].OpiskelijoidenMaara(); y++) {
						if (koulutusohjelmat_[i].annaOpiskelijanumero(y).compare(temp1) == 0) {
							koulutusohjelmat_[i].paivitaOpiskelija(y);
							return;
						}
					}
					cout << "Annettua opiskelijanumeroa ei loytynyt." << endl;
				}
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}

void Koulu::kirjoitaTiedostoon() const															//kirjoitetaan tiedot Koulu.csv tiedostoon. Ensin koulutusohjelmat omille riveilleen, jonka jälkeen opettajat ja oppilaat omilla tunnisteillaan omille riveilleen.
{																								//Näin saadaan helposti luettua tiedot, ja sijoitettua ne oikeille paikoilleen ohjelmassa.
	ofstream kirjoitus;
	kirjoitus.open("Koulu.csv");
	if (kirjoitus.is_open()) {
		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			kirjoitus << "kou" << ";" << koulutusohjelmat_[i].annaNimi() << endl;
		}
		for (unsigned int x = 0; x < koulutusohjelmat_.size(); x++) {
			for (unsigned int y = 0; y < koulutusohjelmat_[x].OpettajienMaara(); y++) {
				kirjoitus << "ope" << ";"
					<< koulutusohjelmat_[x].annaNimi() << ";"
					<< koulutusohjelmat_[x].annaOpettajanEtunimi(y) << ";"
					<< koulutusohjelmat_[x].annaOpettajanSukunimi(y) << ";"
					<< koulutusohjelmat_[x].annaOpettajanOsoite(y) << ";"
					<< koulutusohjelmat_[x].annaOpettajanPuhelinnumero(y) << ";"
					<< koulutusohjelmat_[x].annaOpettajanPalkka(y) << ";"
					<< koulutusohjelmat_[x].annaOpettajanTunnus(y) << ";"
					<< koulutusohjelmat_[x].annaOpettajanOpetusala(y) << endl;
			}
		}
		for (unsigned int x = 0; x < koulutusohjelmat_.size(); x++) {
			for (unsigned int y = 0; y < koulutusohjelmat_[x].OpiskelijoidenMaara(); y++) {
				kirjoitus << "opp" << ";"
					<< koulutusohjelmat_[x].annaNimi() << ";"
					<< koulutusohjelmat_[x].annaOpiskelijanEtunimi(y) << ";"
					<< koulutusohjelmat_[x].annaOpiskelijanSukunimi(y) << ";"
					<< koulutusohjelmat_[x].annaOpiskelijanOsoite(y) << ";"
					<< koulutusohjelmat_[x].annaOpiskelijanPuhelinnumero(y) << ";"
					<< koulutusohjelmat_[x].annaOpiskelijanumero(y) << endl;
			}
		}
	}
	else cout << "Tiedosto ei aukea!" << endl;

	kirjoitus.close();
}

void Koulu::lueTiedostosta()												//luku samasta tiedostosta. Ensin koulutusohjelmat, sitten opettajat ja oppilaat niihin. Tarkistetaan myös onko koulutusohjelmia tai muita luotu jo ennestään, jolloin ei luoda samoja.
{
	int indeksi;
	bool sama = false;
	string tyyppi;
	ifstream luku;
	string koulutusohjelma, etunimi, sukunimi, osoite, puhelinnumero, opiskelijanumero, palkka, tunnus, opetusala;
	luku.open("Koulu.csv");
	if (luku.is_open()) {
		while (luku.peek() != EOF) {
			sama = false;
			getline(luku, tyyppi, ';');
			if (tyyppi.compare("kou") == 0) {
				getline(luku, koulutusohjelma);
				for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
					if (koulutusohjelma.compare(koulutusohjelmat_[i].annaNimi()) == 0) sama = true;
				}
				if (sama == false) {
					koulutusohjelmat_.push_back(Koulutusohjelma(koulutusohjelma));
				}
			}
			else if (tyyppi.compare("ope") == 0) {
				getline(luku, koulutusohjelma, ';');
				for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
					if (koulutusohjelma.compare(koulutusohjelmat_[i].annaNimi()) == 0) indeksi = i;
				}
				getline(luku, etunimi, ';');
				getline(luku, sukunimi, ';');
				getline(luku, osoite, ';');
				getline(luku, puhelinnumero, ';');
				getline(luku, palkka, ';');
				getline(luku, tunnus, ';');
				getline(luku, opetusala);
				for (unsigned int i = 0; i < koulutusohjelmat_[indeksi].OpettajienMaara(); i++) {
					if (tunnus.compare(koulutusohjelmat_[indeksi].annaOpettajanTunnus(i)) == 0) sama = true;
				}
				if (sama == false) {
					koulutusohjelmat_[indeksi].lisaaOpettajaParam(etunimi, sukunimi, osoite,
						puhelinnumero, palkka, tunnus, opetusala);
				}
			}
			else if (tyyppi.compare("opp") == 0) {
				getline(luku, koulutusohjelma, ';');
				for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
					if (koulutusohjelma.compare(koulutusohjelmat_[i].annaNimi()) == 0) indeksi = i;
				}
				getline(luku, etunimi, ';');
				getline(luku, sukunimi, ';');
				getline(luku, osoite, ';');
				getline(luku, puhelinnumero, ';');
				getline(luku, opiskelijanumero);
				for (unsigned int i = 0; i < koulutusohjelmat_[indeksi].OpiskelijoidenMaara(); i++) {
					if (opiskelijanumero.compare(koulutusohjelmat_[indeksi].annaOpiskelijanumero(i)) == 0) sama = true;
				}
				if (sama == false) {
					koulutusohjelmat_[indeksi].lisaaOpiskelijaParam(etunimi, sukunimi, osoite,
						puhelinnumero, opiskelijanumero);
				}
			}
		}
	}
	else cout << "Tiedosto ei aukea!" << endl;

	luku.close();
}

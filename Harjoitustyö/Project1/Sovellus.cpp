#include <iostream>
#include "Sovellus.h"

void pause();

using std::cout; using std::cin; using std::endl;
Sovellus::Sovellus(): nimi_()
{
}

Sovellus::Sovellus(const string& nimi): nimi_(nimi)
{
}

Sovellus::~Sovellus()
{
}

string Sovellus::annaNimi() const
{
	return nimi_;
}

void Sovellus::asetaNimi(const string& nimi)
{
	nimi_ = nimi;
}



void Sovellus::aja()
{
	Koulu amk(nimi_);
	cout << "Tervetuloa " << amk.annaNimi() << "-rekisteriin!" << endl;
	string valinta;

	do {
		valinta = valikko();

		if (valinta == "1") {
			amk.lisaaKoulutusohjelma();
			pause();
		}
		else if (valinta == "2") {
			amk.tulostaKoulutusohjelmat();
			pause();
		}
		else if (valinta == "3") {
			amk.tulostaKoulutusohjelmienMaara();
			pause();
		}
		else if (valinta == "4") {
			amk.tulostaKoulutusohjelmat();
			amk.lisaaKoulutusohjelmaanOpettaja();
			pause();
		}
		else if (valinta == "5") {
			amk.tulostaKoulutusohjelmanOpettajat();
			pause();
		}
		else if (valinta == "6") {
			amk.lisaaKoulutusohjelmaanOpiskelija();
			pause();
		}
		else if (valinta == "7") {
			amk.tulostaKoulutusohjelmanOpiskelijat();
			pause();
		}
		else if (valinta == "8") {
			cout << "Ei valmis" << endl;
			pause();
		}
		else if (valinta == "9") {
			cout << "Ei valmis" << endl;
			pause();
		}
		else if (valinta == "10") {
			cout << "Ei valmis" << endl;
			pause();
		}
		else if (valinta == "11") {
			cout << "Ei valmis" << endl;
			pause();
		}
		else if (valinta == "12") {
			cout << "Ei valmis" << endl;
			pause();
		}
		else if (valinta == "13") {
			cout << "Ei valmis" << endl;
			pause();
		}
		else if (valinta == "14") {
			cout << "Ei valmis" << endl;
			pause();
		}
		else if (valinta == "15") {
			cout << "Ei valmis" << endl;
			pause();
		}
		else if (valinta == "0") {
			cout << "Nakemiin!" << endl;
		}
		else {
			cout << "Virheellinen valinta!" << endl;
			pause();
		}
	} while (valinta != "0");

	return;
}

string Sovellus::valikko() const
{
	string valinta;

	cout << "1) Lisää koulutusohjelma" << endl
		<< "2) Tulosta koulutusohjelmien nimet" << endl
		<< "3) Tulosta koulutusohjelmien määrä" << endl
		<< "4) Lisää koulutusohjelmaan opettaja" << endl
		<< "5) Tulosta koulutusohjelman opettajat" << endl
		<< "6) Lisää koulutusohjelmaan opiskelija" << endl
		<< "7) Tulosta koulutusohjelman opiskelijat" << endl
		<< "8) Poista koulutusohjelma" << endl
		<< "9) Poista opettaja" << endl
		<< "10) Poista opiskelija" << endl
		<< "11) Päivitä koulutusohjelman nimi" << endl
		<< "12) Päivitä opettajan tiedot" << endl
		<< "13) Päivitä opiskelijan tiedot" << endl
		<< "14) Lue tiedot" << endl
		<< "15) Tallenna tiedot" << endl
		<< "0) Lopeta" << endl
		<< "\nAnna syote: ";

	getline(cin, valinta);

	return valinta;

}

void pause() {
	system("@echo off");
	system("echo Paina jotakin jatkaaksesi...");
	system("pause > nul");
	system("cls");
}

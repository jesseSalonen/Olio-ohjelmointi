#include <iostream>
#include "Sovellus.h"

void pause();		//pys‰ytt‰‰ ohjelman ajon, jonka j‰lkeen k‰ytt‰j‰n jatkaessa tyhjennet‰‰n komentoikkuna.

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
		valinta = valikko();		//tulostetaan valikko aina loopin alussa, ja otetaan k‰ytt‰j‰n syˆte "valintaan". 

		if (valinta == "1") {				//Lis‰‰ koulutusuohjelma
			amk.lisaaKoulutusohjelma();
			pause();
		}
		else if (valinta == "2") {			//Tulosta koulutusohjelmien nimet
			amk.tulostaKoulutusohjelmat();
			pause();
		}
		else if (valinta == "3") {			//Tulosta koulutusohjelmien m‰‰r‰
			amk.tulostaKoulutusohjelmienMaara();
			pause();
		}
		else if (valinta == "4") {			// Lis‰‰ koulutusohjelmaan opettaja
			amk.lisaaKoulutusohjelmaanOpettaja();
			pause();
		}
		else if (valinta == "5") {			// Tulosta koulutusohjelman opettajat
			amk.tulostaKoulutusohjelmanOpettajat();
			pause();
		}
		else if (valinta == "6") {			//Lis‰‰ koulutusohjelmaan opiskelija
			amk.lisaaKoulutusohjelmaanOpiskelija();
			pause();
		}
		else if (valinta == "7") {			//Tulosta koulutusohjelman opiskelijat
			amk.tulostaKoulutusohjelmanOpiskelijat();
			pause();
		}
		else if (valinta == "8") {			//Poista koulutusohjelma
			amk.poistaKoulutusohjelma();
			pause();
		}
		else if (valinta == "9") {			//Poista opettaja
			amk.poistaOpettaja();
			pause();
		}
		else if (valinta == "10") {			//Poista opiskelija
			amk.poistaOpiskelija();
			pause();
		}
		else if (valinta == "11") {			//P‰ivit‰ koulutusohjelman nimi
			amk.paivitaKoulutusohjelmanNimi();
			pause();
		}
		else if (valinta == "12") {			//P‰ivit‰ opettajan tiedot
			amk.paivitaOpettajanTiedot();
			pause();
		}
		else if (valinta == "13") {			//P‰ivit‰ opiskelijan tiedot
			amk.paivitaOpiskelijanTiedot();
			pause();
		}
		else if (valinta == "14") {			//Lue tiedot
			amk.lueTiedostosta();
			pause();
		}
		else if (valinta == "15") {			//Tallenna tiedot
			amk.kirjoitaTiedostoon();
			pause();
		}
		else if (valinta == "0") {			//lopetus
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

	cout << "1) Lis‰‰ koulutusohjelma" << endl
		<< "2) Tulosta koulutusohjelmien nimet" << endl
		<< "3) Tulosta koulutusohjelmien m‰‰r‰" << endl
		<< "4) Lis‰‰ koulutusohjelmaan opettaja" << endl
		<< "5) Tulosta koulutusohjelman opettajat" << endl
		<< "6) Lis‰‰ koulutusohjelmaan opiskelija" << endl
		<< "7) Tulosta koulutusohjelman opiskelijat" << endl
		<< "8) Poista koulutusohjelma" << endl
		<< "9) Poista opettaja" << endl
		<< "10) Poista opiskelija" << endl
		<< "11) P‰ivit‰ koulutusohjelman nimi" << endl
		<< "12) P‰ivit‰ opettajan tiedot" << endl
		<< "13) P‰ivit‰ opiskelijan tiedot" << endl
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

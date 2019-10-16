#pragma once
#include <string>

using std::string;
class Henkilo
{

public:
	Henkilo();
	Henkilo(const string& etunimi, const string& sukunimi, const string& osoite, const string& puhelinnumero);
	Henkilo(const Henkilo& alkup);
	~Henkilo();

	string annaEtunimi() const;
	string annaSukunimi() const;
	string annaOsoite() const;
	string annaPuhelinnumero() const;

	void asetaEtunimi(const string& etunimi);
	void asetaSukunimi(const string& sukunimi);
	void asetaOsoite(const string& osoite);
	void asetaPuhelinnumero(const string& puhelinnuemero);

	void tulosta() const;
	void kysyTiedot();


private:
	string etunimi_;
	string sukunimi_;
	string osoite_;
	string puhelinnumero_;
};


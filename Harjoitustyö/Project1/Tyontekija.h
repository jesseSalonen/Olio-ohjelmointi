#pragma once
#include "Henkilo.h"
class Tyontekija :
	public Henkilo
{
public:
	Tyontekija();
	Tyontekija(const string& etunimi, const string& sukunimi, const string& osoite, const string& puhelinnumero, 
		const string& palkka, const string& tunnus);
	Tyontekija(const Tyontekija& alkup);
	~Tyontekija();
	Tyontekija& operator=(const Tyontekija& tyont);

	string annaPalkka() const;
	string annaTunnus() const;
	void asetaPalkka(const string& palkka);
	void asetaTunnus(const string& tunnus);
	void kysyTiedot();
	void tulosta() const;
private:
	string palkka_;
	string tunnus_;
};


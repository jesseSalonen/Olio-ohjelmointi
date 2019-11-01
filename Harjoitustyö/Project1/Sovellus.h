#pragma once
#include <string>
#include "Koulu.h"
using std::string;
class Sovellus
{
public:
	Sovellus();
	Sovellus(const string& nimi);
	~Sovellus();

	string annaNimi() const;
	void asetaNimi(const string& nimi);

	void aja();
	string valikko() const;
private:
	string nimi_;
};


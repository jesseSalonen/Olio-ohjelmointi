#include <iostream>
#include "Murtoluku.h"
using std::cout; using std::endl; using std::cin;

Murtoluku::Murtoluku(): os_(1), nim_(1)
{
}

Murtoluku::Murtoluku(int os, int nim): os_(os), nim_(nim)
{
}

Murtoluku::~Murtoluku()
{
}

int Murtoluku::annaOsoittaja()
{
	return os_;
}

int Murtoluku::annaNimittaja()
{
	return nim_;
}

void Murtoluku::asetaOsoittaja(int os)
{
	os_ = os;
}

void Murtoluku::asetaNimittaja(int nim)
{
	nim_ = nim;
}

void Murtoluku::tulosta()
{
	cout << os_ << "/" << nim_ << endl;
}

void Murtoluku::kysyTiedot()
{
	cout << "Anna osoittaja: ";
	cin >> os_;
	cout << "Anna nimittaja: ";
	cin >> nim_;
}

void Murtoluku::sievenna()
{
	// kotiin euclidean algorithm implementations ensimm�inen, mod=jakoj��nn�s, ':' voi unohtaa.
}

int Murtoluku::SYT()
{
	return 0;
}

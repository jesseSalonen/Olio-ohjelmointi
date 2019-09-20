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
	int SYT = Murtoluku::SYT(os_, nim_);
	os_ = os_ / SYT;
	nim_ = nim_ / SYT;
}

int Murtoluku::SYT(int os, int nim)
{
	int t = 0;
	while (nim != 0) {
		t = nim;
		nim = os % nim;
		os = t;
	}
	return os;
}

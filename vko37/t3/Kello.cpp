#include <iostream>
#include "Kello.h"

using std::cout; using std::cin; using std::endl;

Kello::Kello(): tt_(12), mm_(0), ss_(0)
{
	cout << "Kello: oletusrakentaja " << this << endl;
}

Kello::Kello(int tt, int mm, int ss): tt_(tt), mm_(mm), ss_(ss)
{
	cout << "Kello: param. rak. " << this << endl;
}

Kello::~Kello()
{
	cout << "Kello: purkaja " << this << endl;
}

int Kello::annaTunnit()
{
	return tt_;
}

int Kello::annaMinuutit()
{
	return mm_;
}

int Kello::annaSekunnit()
{
	return ss_;
}

void Kello::asetaAika(int tt, int mm, int ss)
{
	tt_ = tt;
	mm_ = mm;
	ss_ = ss;
}

void Kello::tulostaAika()
{
	cout << tt_ << ':' << mm_ << ':' << ss_ << endl;
}

void Kello::kysyAika()
{
	cout << "Anna tunnit, minuutit ja sekunnit." << endl;
	cout << "Tunnit: ";
	cin >> tt_;
	cout << "Minuutit: ";
	cin >> mm_;
	cout << "Sekunnit: ";
	cin >> ss_;
}

void Kello::lisaaSekunti()
{
	if (ss_ == 59) {
		if (mm_ == 59) {
			if (tt_ == 23) {
				tt_ = 0;
				mm_ = 0;
				ss_ = 0;
				return;
			}
			tt_++;
			mm_ = 0;
			ss_ = 0;
			return;
		}
		mm_++;
		ss_ = 0;
		return;
	}
	ss_++;
	return;
}

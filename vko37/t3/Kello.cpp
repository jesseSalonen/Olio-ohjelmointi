#include <iostream>
#include "Kello.h"

using std::cout; using std::endl;

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

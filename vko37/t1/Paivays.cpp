#include "Paivays.h"
#include <iostream>

using std::endl; using std::cout;

Paivays::Paivays(): pp_(1), kk_(1), vv_(1970)
{
	cout << "Paivays: oletusrakentaja " << this << endl;
}

Paivays::Paivays(int pp, int kk, int vv): pp_(pp), kk_(kk), vv_(vv)
{
	cout << "Paivays: param. rak. " << this << endl;
}

Paivays::Paivays(const Paivays& alkup):pp_(alkup.pp_),
kk_(alkup.kk_), vv_(alkup.vv_)
{
	cout << "Paivays: kopio rak. " << this << endl;
}

Paivays::~Paivays()
{
	cout << "Paivays: purkaja " << this << endl;
}

int Paivays::annaPaiva() {
	return pp_;
}

int Paivays::annaKuukausi() {
	return kk_;
}

int Paivays::annaVuosi() {
	return vv_;
}

void Paivays::asetaPaiva(int pp) {
	pp_ = pp;
}

void Paivays::asetaKuukausi(int kk) {
	kk_ = kk;
}

void Paivays::asetaVuosi(int vv)
{
	vv_ = vv;
}

void Paivays::tulosta()
{
	cout << pp_ << "." << kk_ << "." << vv_ << endl;
}

int Paivays::montakoPaivaaKuukaudessa()
{
	if (kk_ == 2) {
		if (vv_ % 4 != 0) return 28;
		else if (vv_ % 100 != 0) return 29;
		else if (vv_ % 400 != 0) return 28;
		else return 29;
	}
	else if (kk_ == 4 || kk_ == 6 || kk_ == 9 || kk_ == 11)
		return 30;
	else
		return 31;
	
}

void Paivays::lisaaPaiva()
{
	if (pp_ == montakoPaivaaKuukaudessa()) {
		if (kk_ == 12) {
			vv_++;
			kk_ = 1;
			pp_ = 1;
		}
		else
			kk_++;
			pp_ = 1;
	}
	else
		pp_++;
}



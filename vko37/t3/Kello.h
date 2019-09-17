#pragma once

class Kello {
public:

	//getters
	int annaTunnit();
	int annaMinuutit();
	int annaSekunnit();

	//setters
	void asetaAika(int tt, int mm, int ss);
	void tulostaAika();

private:

	int tt_;
	int mm_;
	int ss_;

};
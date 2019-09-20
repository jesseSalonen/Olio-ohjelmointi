#pragma once

class Paivays {
public:
	Paivays(); //oletusrakentaja
	Paivays(int pp, int kk, int vv); //param. rakentaja
	~Paivays();  //purkaja


	// getters
	int annaPaiva();
	int annaKuukausi();
	int annaVuosi();
	
	// setters
	void asetaPaiva(int pp);
	void asetaKuukausi(int kk);
	void asetaVuosi(int vv);

	void tulosta();

private:
	int pp_;
	int kk_;
	int vv_;

};

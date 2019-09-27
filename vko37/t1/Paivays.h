#pragma once

class Paivays {
public:
	Paivays(); //oletusrakentaja
	Paivays(int pp, int kk, int vv); //param. rakentaja
	Paivays(const Paivays& alkup); // kopiorak. saa parametrina vakioviittauksen alkup. olioon
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
	int montakoPaivaaKuukaudessa();
	void lisaaPaiva();

private:
	int pp_;
	int kk_;
	int vv_;

};

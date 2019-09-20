#pragma once
class Murtoluku
{

public:
	Murtoluku();
	Murtoluku(int os, int nim);
	~Murtoluku();

	int annaOsoittaja();
	int annaNimittaja();
	void asetaOsoittaja(int os);
	void asetaNimittaja(int nim);

	void tulosta();
	void kysyTiedot();
	void sievenna();

private:
	int SYT();
	int os_;
	int nim_;
};


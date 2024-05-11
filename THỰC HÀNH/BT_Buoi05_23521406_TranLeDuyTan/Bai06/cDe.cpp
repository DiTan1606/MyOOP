#include "cDe.h"
int cDe::sinhCon() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(2, 3);
	int soCon = dis(gen);
	return soCon;
}
int cDe::choSua() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(0, 10);
	int luongSua = dis(gen);
	return luongSua;
}
string cDe::phatRaTiengKeu() {
	return "mee mee mee";
}
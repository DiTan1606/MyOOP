#include "cCuu.h"
int cCuu::sinhCon() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 3);
	int soCon = dis(gen);
	return soCon;
}
int cCuu::choSua() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(0, 5);
	int luongSua = dis(gen);
	return luongSua;
}
string cCuu::phatRaTiengKeu() {
	return "bee bee bee";
}
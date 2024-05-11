#include "cBo.h"

int cBo::sinhCon() {
	return 1;
}
int cBo::choSua() {
	random_device rd;
	mt19937 gen(rd()); 
	uniform_int_distribution<> dis(0, 20); 
	int luongSua = dis(gen);
	return luongSua;
}
string cBo::phatRaTiengKeu() {
	return "moo moo moo";
}
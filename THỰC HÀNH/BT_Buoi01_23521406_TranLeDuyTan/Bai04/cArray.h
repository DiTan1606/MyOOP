#pragma once
#include "cPhanSo.h"

class cArray
{
private:
	int size;
	cPhanSo* arr;
public:
	cArray();
	cArray(int);
	void nhapmang(int);
	void xuatmang();
	cPhanSo phansolonnhat();
	cArray sapxeptangdan();
	cArray sapxepgiamdan();
	~cArray();
};


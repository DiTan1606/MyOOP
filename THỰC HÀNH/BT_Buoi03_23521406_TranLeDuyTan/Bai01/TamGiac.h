#pragma once
#include "Diem.h"
#include <cmath>
class TamGiac
{
private: 
	Diem A, B, C;
public:
	TamGiac();
	TamGiac(double, double, double, double, double, double);
	void nhapTamGiac();
	void xuatTamGiac();
	void TinhTien(double, double);
	void quay(float);
	void phongto(float);
	void thunho(float);
};


#pragma once
#include "PhanSo.h"

class DSPhanSo
{
private:
	int size;
	PhanSo* arr;
public:
	DSPhanSo();
	DSPhanSo(int);
	void nhapDSPhanSo(int);
	void xuatDSPhanSo();
	PhanSo at(int);
	PhanSo tinhTong();
	PhanSo findMax();
	PhanSo findMin();
	DSPhanSo sapXepTangDan();
	DSPhanSo sapXepGiamDan();
	~DSPhanSo();
};




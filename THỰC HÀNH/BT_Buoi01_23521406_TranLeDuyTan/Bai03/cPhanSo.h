#pragma once
#include <iostream>
using namespace std;
class cPhanSo
{
private:
	int tuso;
	int mauso;
public:
	cPhanSo();
	cPhanSo(int, int);
	void nhap();
	void xuat();
	cPhanSo rutGon();
	cPhanSo cong(cPhanSo);
	cPhanSo tru(cPhanSo);
	cPhanSo nhan(cPhanSo);
	cPhanSo chia(cPhanSo);
};


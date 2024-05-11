#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;
class cPhanSo
{
private:
	int tuso;
	int mauso;
public:
	cPhanSo();
	cPhanSo(int tuso, int mauso);

	void nhap();
	void xuat();
	cPhanSo rutGon();
	cPhanSo cong(cPhanSo);
	cPhanSo tru(cPhanSo);
	cPhanSo nhan(cPhanSo);
	cPhanSo chia(cPhanSo);

	//get/set
	int getTuso();
	int getMauso();
	void setTuso(int);
	void setMauso(int);
};


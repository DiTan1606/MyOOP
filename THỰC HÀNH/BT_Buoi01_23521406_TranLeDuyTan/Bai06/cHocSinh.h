#pragma once
#include <iostream>
#include <string>
using namespace std;
class cHocSinh
{
private:
	string hoten;
	float diemToan, diemVan;
public:
	cHocSinh();
	cHocSinh(string, float, float);
	void nhap();
	void xuat();
	float diemTB();
	string getHoTen();
};


#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class cSinhVien
{
protected:
	string mssv;
	string hoTen;
	string diaChi;
	int tongTC;
	float DTB;
public:
	void nhap();
	bool xetTN();
	string getMSSV();
	string getHoTen();
	string getDiaChi();
	int getTongSoTinChi();
	float getDTB();
};


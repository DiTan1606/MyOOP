// MSSV: 23521406
// Ho va ten: Tran Le Duy Tan
// Ngay sinh: 16/6/2005
// lop: IT002.O221

#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class SVCaoDang
{
private:
	string mssv;
	string hoTen;
	string diaChi;
	int tongSoTinChi;
	float DTB;
	float DiemTotNghiep;
public:
	SVCaoDang();
	bool XetTotNghiep();
	void nhap();
	void xuat();
	
	string getMSSV();
	string getHoTen();
	string getDiaChi();
	int getTongSoTinChi();
	float getDTB();
	float getDTN();
};


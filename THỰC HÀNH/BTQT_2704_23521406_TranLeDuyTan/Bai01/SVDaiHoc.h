// MSSV: 23521406
// Ho va ten: Tran Le Duy Tan
// Ngay sinh: 16/6/2005
// lop: IT002.O221

#pragma once
#include <iostream>
#include <string>
using namespace std;

class SVDaiHoc
{
private:
	string mssv;
	string hoTen;
	string diaChi;
	int tongSoTinChi;
	float DTB;
	string tenLuanVan;
	float diemLuanVan;
public:
	SVDaiHoc();
	bool XetTotNghiep();
	void nhap();
	void xuat();

	string getMSSV();
	string getHoTen();
	string getDiaChi();
	int getTongSoTinChi();
	float getDTB();
	string getTenLuanVan();
	float getDLV();
};
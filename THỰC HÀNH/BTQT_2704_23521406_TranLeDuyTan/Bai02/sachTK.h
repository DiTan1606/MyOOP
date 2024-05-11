// MSSV: 23521406
// Ho va ten: Tran Le Duy Tan
// Ngay sinh: 16/6/2005
// lop: IT002.O221

#include <iostream>
#include <string>
using namespace std;

#pragma once
class sachTK
{
private:
	string maSach;
	string tenSach;
	string NXB;
	int sl;
	double donGia;
	double tienThue;
public:
	sachTK();
	void nhap();

	string getMaSach();
	string getTenSach();
	string getNXB();
	int getSL();
	double getDonGia();
	double getTienThue();

	double thanhTien();
};


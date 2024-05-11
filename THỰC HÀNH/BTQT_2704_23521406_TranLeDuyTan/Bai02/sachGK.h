// MSSV: 23521406
// Ho va ten: Tran Le Duy Tan
// Ngay sinh: 16/6/2005
// lop: IT002.O221

#include <iostream>
#include <string>
using namespace std;

#pragma once
class sachGK
{
private:
	string maSach;
	string tenSach;
	string NXB;
	int sl;
	double donGia;
	bool tinhTrang;
public:
	sachGK();
	void nhap();

	string getMaSach();
	string getTenSach();
	string getNXB();
	int getSL();
	double getDonGia();
	bool getTinhTrang();

	double thanhTien();
};


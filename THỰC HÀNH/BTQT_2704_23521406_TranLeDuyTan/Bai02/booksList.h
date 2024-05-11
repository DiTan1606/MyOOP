// MSSV: 23521406
// Ho va ten: Tran Le Duy Tan
// Ngay sinh: 16/6/2005
// lop: IT002.O221

#include "sachGK.h"
#include "sachTK.h"
#include <iomanip>

#pragma once
class booksList
{
private:
	int slSachGK;
	int slSachTK;
	sachGK* DSSachGK;
	sachTK* DSSachTK;
public:
	booksList();
	void nhapDSSachGK();
	void nhapDSSachTK();
	void nhap();

	void xuatDSSachGK();
	void xuatDSSachTK();
	void xuat();

	booksList coThanhTienItNhat();
	booksList timSGKQuaTenNXB(string nxb);

	~booksList();
};


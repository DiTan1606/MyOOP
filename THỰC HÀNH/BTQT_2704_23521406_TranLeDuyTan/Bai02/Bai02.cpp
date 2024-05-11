// MSSV: 23521406
// Ho va ten: Tran Le Duy Tan
// Ngay sinh: 16/6/2005
// lop: IT002.O221

#include <iostream>
#include "booksList.h"

int main()
{
	booksList BL;
	BL.nhap();
	BL.xuat();

	cout << "danh sach sach co thanh tien it nhat: " << endl;
	BL.coThanhTienItNhat().xuat();

	string nxb;
	cout << "danh sach sgk theo ten nxb" << endl;
	cout << "nhap ten nxb: ";
	cin.ignore();
	getline(cin, nxb);
	BL.timSGKQuaTenNXB(nxb).xuatDSSachGK();
}


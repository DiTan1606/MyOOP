#include "cHocSinh.h"
cHocSinh::cHocSinh() {}
void cHocSinh::nhap() {
	cConNguoi::nhap();
	cout << "Nhap ten truong: ";
	getline(cin, tenTruong);
	cout << "Nhap ten lop: ";
	getline(cin, tenLop);
	cout << "Nhap DTB: ";
	getline(cin, DTB);
}
void cHocSinh::xuat() {
	cout << setw(15) << "hoc sinh";
	cConNguoi::xuat();
	cout << setw(20) << tenTruong << setw(20) << tenLop << setw(7) << DTB << endl;
}
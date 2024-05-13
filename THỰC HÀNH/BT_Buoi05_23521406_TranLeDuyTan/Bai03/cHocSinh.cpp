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
	cout << setfill(' ');
	cout << setw(20) << "CCCD" << setw(20) << "Ho va ten" << setw(20) << "Ngay Sinh" << setw(20) << "Gioi Tinh" << setw(20) << "Dia chi" <<  setw(20) << "Truong" << setw(10) << "Lop" << setw(10) << "DTB" << endl;
	cout << setfill('-') << setw(140) << "-" << endl;
	cout << setfill(' ');
	cout << setw(20) << CCCD << setw(20) << hoTen << setw(20) << ngaySinh << setw(20) << gioiTinh << setw(20) << diaChi << setw(20) << tenTruong << setw(10) << tenLop << setw(10) << DTB << endl;
}
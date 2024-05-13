#include "cConNguoi.h"
cConNguoi::cConNguoi() {}
void cConNguoi::nhap() {
	cout << "nhap CCCD: ";
	cin >> CCCD;
	cout << "nhap ho va ten: ";
	cin.ignore();
	getline(cin, hoTen);
	cout << "nhap ngay sinh: ";
	getline(cin, ngaySinh);
	cout << "nhap gioi tinh: ";
	getline(cin, gioiTinh);
	cout << "nhap dia chi: ";
	getline(cin, diaChi);
}
void cConNguoi::xuat() {
	cout << setw(15) << CCCD << setw(20) << hoTen << setw(15) << ngaySinh << setw(10) << gioiTinh << setw(15) << diaChi;
}
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
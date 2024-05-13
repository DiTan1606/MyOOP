#include "cSinhVien.h"
cSinhVien::cSinhVien() {}
void cSinhVien::nhap() {
	cConNguoi::nhap();
	cout << "Nhap ten truong: ";
	getline(cin, tenTruong);
	cout << "Nhap ten nganh: ";
	getline(cin, tenNganh);
	cout << "Nhap GPA: ";
	cin >> GPA;
}
void cSinhVien::xuat() {
	cout << setw(15) << "sinh vien";
	cConNguoi::xuat();
	cout << setw(20) << tenTruong << setw(20) << tenNganh << setw(7) << GPA << endl;
}
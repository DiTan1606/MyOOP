#include "cNhanVien.h"
cNhanVien::cNhanVien() {}
void cNhanVien::nhap() {
	cout << "nhap ho ten: "; cin.ignore(); getline(cin, hoTen);
	cout << "nhap ngay sinh: "; getline(cin, ngaySinh);
}
double cNhanVien::tinhLuong() {
	return 0;
}
string cNhanVien::getHoTen() {
	return hoTen;
}
string cNhanVien::getNgaySinh() {
	return ngaySinh;
}
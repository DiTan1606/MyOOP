#include "cNhanVienVP.h"
cNhanVienVP::cNhanVienVP() {}
void cNhanVienVP::nhap() {
	cNhanVien::nhap();
	cout << "nhap so ngay lam viec: "; cin >> soNgayLamViec;
}
double cNhanVienVP::tinhLuong() {
	return soNgayLamViec * 100000;
}
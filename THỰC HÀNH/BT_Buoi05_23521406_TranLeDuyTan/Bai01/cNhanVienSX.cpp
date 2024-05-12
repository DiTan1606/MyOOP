#include "cNhanVienSX.h"
cNhanVienSX::cNhanVienSX() {}
void cNhanVienSX::nhap() {
	cNhanVien::nhap();
	cout << "nhap luong can ban: "; cin >> luongCanBan;
	cout << "nhap so san pham: "; cin >> soSanPham;
}
double cNhanVienSX::tinhLuong() {
	return luongCanBan + soSanPham * 5000;
}
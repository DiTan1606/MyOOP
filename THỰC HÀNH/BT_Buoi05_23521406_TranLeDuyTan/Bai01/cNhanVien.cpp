#include "cNhanVien.h"
cNhanVien::cNhanVien() {}
void cNhanVien::nhap() {
	cout << "nhap ho ten: "; getline(cin, hoTen);
	cout << "nhap ngay sinh: "; getline(cin, ngaySinh);
}
double cNhanVien::tinhLuong() {
	return 0;
}
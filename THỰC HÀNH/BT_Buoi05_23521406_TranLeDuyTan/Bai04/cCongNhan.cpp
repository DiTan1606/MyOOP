#include "cCongNhan.h"
cCongNhan::cCongNhan() {}
void cCongNhan::nhap() {
	cConNguoi::nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> soNgayLamViec;
}
double cCongNhan::tinhLuong() {
	return soNgayLamViec * 300000;
}
void cCongNhan::xuat() {
	cout << setw(15) << "cong nhan";
	cConNguoi::xuat();
	string ngay = to_string(soNgayLamViec) + " ngay";

	stringstream stream;
	stream << fixed << setprecision(1) << tinhLuong();
	string luong = stream.str() + " vnd";

	cout << setw(20) << ngay << setw(20) << luong << endl;
}
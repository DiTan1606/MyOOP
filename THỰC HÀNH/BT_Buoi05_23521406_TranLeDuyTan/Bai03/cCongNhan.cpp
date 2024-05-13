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
	cout << setfill(' ');
	cout << setw(20) << "CCCD" << setw(20) << "Ho va ten" << setw(20) << "Ngay Sinh" << setw(20) << "Gioi Tinh" << setw(20) << "Dia chi" << setw(20) << "SNLV" << setw(20) << "Luong"  << endl;
	cout << setfill('-') << setw(140) << "-" << endl;
	cout << setfill(' ');
	cout << setw(20) << CCCD << setw(20) << hoTen << setw(20) << ngaySinh << setw(20) << gioiTinh << setw(20) << diaChi << setw(20) << soNgayLamViec << setw(20) << fixed << setprecision(1) <<  tinhLuong() << endl;
}
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
	cout << setfill(' ');
	cout << setw(20) << "CCCD" << setw(20) << "Ho va ten" << setw(20) << "Ngay Sinh" << setw(20) << "Gioi Tinh" << setw(20) << "Dia chi" << setw(20) << "Truong" << setw(20) << "Nganh" << setw(10) << "GPA" << endl;
	cout << setfill('-') << setw(150) << "-" << endl;
	cout << setfill(' ');
	cout << setw(20) << CCCD << setw(20) << hoTen << setw(20) << ngaySinh << setw(20) << gioiTinh << setw(20) << diaChi << setw(20) << tenTruong << setw(20) << tenNganh << setw(10) << GPA << endl;
}
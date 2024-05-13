#include "cCaSi.h"
cCaSi::cCaSi() {}
void cCaSi::nhap() {
	cConNguoi::nhap();
	cout << "Nhap the loai nhac: ";
	getline(cin, theLoaiNhac);
	cout << "Nhap ten bai hat: ";
	getline(cin, tenBaiHat);
}
void cCaSi::xuat() {
	cout << setfill(' ');
	cout << setw(20) << "CCCD" << setw(20) << "Ho va ten" << setw(20) << "Ngay Sinh" << setw(20) << "Gioi Tinh" << setw(20) << "Dia chi" << setw(20) << "The loai nhac" << setw(20) << "Ten bai hat" << endl;
	cout << setfill('-') << setw(140) << "-" << endl;
	cout << setfill(' ');
	cout << setw(20) << CCCD << setw(20) << hoTen << setw(20) << ngaySinh << setw(20) << gioiTinh << setw(20) << diaChi << setw(20) << theLoaiNhac << setw(20) << tenBaiHat << endl;
}
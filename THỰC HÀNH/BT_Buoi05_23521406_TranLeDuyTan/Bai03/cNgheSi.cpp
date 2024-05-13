#include "cNgheSi.h"
cNgheSi::cNgheSi(){}
void cNgheSi::nhap() {
	cConNguoi::nhap();
	cout << "Nhap vai tro cua nghe si: ";
	getline(cin, vaiTro);
	cout << "Nhap tac pham nghe thuat: ";
	getline(cin, tacPhamNgheThuat);
}
void cNgheSi::xuat() {
	cout << setfill(' ');
	cout << setw(20) << "CCCD" << setw(20) << "Ho va ten" << setw(20) << "Ngay Sinh" << setw(20) << "Gioi Tinh" << setw(20) << "Dia chi" << setw(20) << "Vai tro" << setw(20) << "TPNT" << endl;
	cout << setfill('-') << setw(140) << "-" << endl;
	cout << setfill(' ');
	cout << setw(20) << CCCD << setw(20) << hoTen << setw(20) << ngaySinh << setw(20) << gioiTinh << setw(20) << diaChi << setw(20) << vaiTro << setw(20) << tacPhamNgheThuat << endl;
}
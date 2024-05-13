#include "cNgheSi.h"
cNgheSi::cNgheSi() {}
void cNgheSi::nhap() {
	cConNguoi::nhap();
	cout << "Nhap vai tro cua nghe si: ";
	getline(cin, vaiTro);
	cout << "Nhap tac pham nghe thuat: ";
	getline(cin, tacPhamNgheThuat);
}
void cNgheSi::xuat() {
	cout << setw(15) << "nghe si";
	cConNguoi::xuat();
	cout << setw(20) << vaiTro << setw(20) << tacPhamNgheThuat << endl;
}
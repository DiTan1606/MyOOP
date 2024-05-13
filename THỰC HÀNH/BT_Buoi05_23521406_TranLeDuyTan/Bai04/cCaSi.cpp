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
	cout << setw(15) << "ca si";
	cConNguoi::xuat();
	cout << setw(20) << theLoaiNhac << setw(20) << tenBaiHat << endl;
}
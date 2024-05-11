// MSSV: 23521406
// Ho va ten: Tran Le Duy Tan
// Ngay sinh: 16/6/2005
// lop: IT002.O221

#include "sachTK.h"

sachTK::sachTK() {}
void sachTK::nhap() {
	cout << "nhap ma sach: ";
	cin.ignore();
	getline(cin, maSach);

	cout << "nhap ten sach: ";
	getline(cin, tenSach);

	cout << "nhap Nha xuat ban: ";
	getline(cin, NXB);

	cout << "nhap so luong: ";
	cin >> sl;
	cin.ignore();

	cout << "nhap don gia: ";
	cin >> donGia;
	cin.ignore();

	cout << "nhap tien thue: ";
	cin >> tienThue;
}

string sachTK::getMaSach() {
	return maSach;
}
string sachTK::getTenSach() {
	return tenSach;
}
string sachTK::getNXB() {
	return NXB;
}
int sachTK::getSL(){
	return sl;
}
double sachTK::getDonGia() {
	return donGia;
}
double sachTK::getTienThue() {
	return tienThue;
}

double sachTK::thanhTien() {
	int thanhtien = sl * donGia + tienThue;
	return thanhtien;
}
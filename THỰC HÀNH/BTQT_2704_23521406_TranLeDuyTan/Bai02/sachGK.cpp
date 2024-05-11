// MSSV: 23521406
// Ho va ten: Tran Le Duy Tan
// Ngay sinh: 16/6/2005
// lop: IT002.O221

#include "sachGK.h"

sachGK::sachGK() {}

void sachGK::nhap() {
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

	cout << "nhap tinh trang (0:cu, 1:moi): ";
	cin >> tinhTrang;
}

string sachGK::getMaSach() {
	return maSach;
}
string sachGK::getTenSach() {
	return tenSach;
}
string sachGK::getNXB() {
	return NXB;
}
int sachGK::getSL() {
	return sl;
}
double sachGK::getDonGia() {
	return donGia;
}
bool sachGK::getTinhTrang() {
	return tinhTrang;
}

double sachGK::thanhTien() {
	double thanhtien;
	if (tinhTrang == 1) {
		thanhtien = sl * donGia;
	}
	else {
		thanhtien = sl * donGia * 0.5;
	}
	return thanhtien;
}

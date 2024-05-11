#include "cSinhVien.h"

void cSinhVien::nhap() {
	cout << "nhap MSSV: ";
	cin.ignore();
	getline(cin, mssv);

	cout << "nhap Ho va Ten: ";
	getline(cin, hoTen);

	cout << "nhap dia chi: ";
	getline(cin, diaChi);

	cout << "nhap tong so tin chi: ";
	cin >> tongTC;
	cin.ignore();

	cout << "nhap DTB: ";
	cin >> DTB;
	cin.ignore();
}

bool cSinhVien::xetTN() {
	return false;
}
string cSinhVien::getMSSV() {
	return mssv;
}
string cSinhVien::getHoTen() {
	return hoTen;
}
string cSinhVien::getDiaChi() {
	return diaChi;
}
int cSinhVien::getTongSoTinChi() {
	return tongTC;
}
float cSinhVien::getDTB() {
	return DTB;
}
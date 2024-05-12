#include "cSinhVien.h"

void cSinhVien::nhap() {
	cout << "nhap MSSV: ";
	cin >> mssv;

	cout << "nhap Ho va Ten: ";
	cin.ignore();
	getline(cin, hoTen);

	cout << "nhap dia chi: ";
	getline(cin, diaChi);

	cout << "nhap tong so tin chi: ";
	cin >> tongTC;

	cout << "nhap DTB: ";
	cin >> DTB;
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
#include "cHocSinh.h"
cHocSinh::cHocSinh() {}
cHocSinh::cHocSinh(string hoten, float diemToan, float diemVan) {}
void cHocSinh::nhap() {
	cin.ignore();
	cout << "nhap ho va ten: ";
	getline(cin, hoten);
	cout << "nhap diem toan: ";
	cin >> diemToan;
	cout << "nhap diem van: ";
	cin >> diemVan;
}
void cHocSinh::xuat() {
	cout << "ho va ten: " << hoten << endl;
	cout << "diem toan: " << diemToan << endl;
	cout << "diem van: " << diemVan << endl;
	cout << "diem TB: " << diemTB();
}
float cHocSinh::diemTB() {
	float dtb = (diemToan + diemVan) / 2;
	return dtb;
}
string cHocSinh::getHoTen() {
	return hoten;
}

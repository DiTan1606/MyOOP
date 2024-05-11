#include "cSinhVienDH.h"
void cSinhVienDH::nhap() {
	cSinhVien::nhap();
	cout << "nhap ten luan van: ";
	cin.ignore();
	getline(cin, tenLuanVan);

	cout << "nhap diem luan van: ";
	cin >> diemLuanVan;
}
bool cSinhVienDH::xetTN() {
	return (tongTC >= 145 && DTB >= 5 && diemLuanVan >= 5);
}
string cSinhVienDH::getTenLuanVan() {
	return tenLuanVan;
}
float cSinhVienDH::getDLV() {
	return diemLuanVan;
}
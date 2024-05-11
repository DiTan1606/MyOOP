// MSSV: 23521406
// Ho va ten: Tran Le Duy Tan
// Ngay sinh: 16/6/2005
// lop: IT002.O221

#include "SVDaiHoc.h"

SVDaiHoc::SVDaiHoc() {}

bool SVDaiHoc::XetTotNghiep() {
	if (this->tongSoTinChi >= 145 && this->DTB >= 5 && this->diemLuanVan >= 5) {
		return true;
	}
	return false;
}
void SVDaiHoc::nhap() {
	cout << "nhap MSSV: ";
	cin.ignore(); 
	getline(cin, mssv);

	cout << "nhap Ho va Ten: ";
	getline(cin, hoTen);

	cout << "nhap dia chi: ";
	getline(cin, diaChi);

	cout << "nhap tong so tin chi: ";
	cin >> tongSoTinChi;
	cin.ignore(); 

	cout << "nhap DTB: ";
	cin >> DTB;
	cin.ignore();
	
	cout << "nhap ten luan van: ";
	getline(cin, tenLuanVan);

	cout << "nhap diem luan van: ";
	cin >> diemLuanVan;
}

string SVDaiHoc::getMSSV() {
	return mssv;
}
string SVDaiHoc::getHoTen() {
	return hoTen;
}
string SVDaiHoc::getDiaChi() {
	return diaChi;
}
int SVDaiHoc::getTongSoTinChi() {
	return tongSoTinChi;
}
float SVDaiHoc::getDTB() {
	return DTB;
}
string SVDaiHoc::getTenLuanVan() {
	return tenLuanVan;
}
float SVDaiHoc::getDLV() {
	return diemLuanVan;
}
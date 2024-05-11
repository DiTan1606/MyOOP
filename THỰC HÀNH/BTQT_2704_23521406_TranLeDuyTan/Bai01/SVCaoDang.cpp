// MSSV: 23521406
// Ho va ten: Tran Le Duy Tan
// Ngay sinh: 16/6/2005
// lop: IT002.O221

#include "SVCaoDang.h"

SVCaoDang::SVCaoDang() {}

bool SVCaoDang::XetTotNghiep() {
	if (this->tongSoTinChi >= 110 && this->DTB >= 5 && this->DiemTotNghiep >= 5) {
		return true;
	}
	return false;
}

void SVCaoDang::nhap() {
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

	cout << "nhap diem tot nghiep: ";
	cin >> DiemTotNghiep;
}

string SVCaoDang::getMSSV() {
	return mssv;
}
string SVCaoDang::getHoTen() {
	return hoTen;
}
string SVCaoDang::getDiaChi() {
	return diaChi;
}
int SVCaoDang::getTongSoTinChi() {
	return tongSoTinChi;
}
float SVCaoDang::getDTB() {
	return DTB;
}
float SVCaoDang::getDTN() {
	return DiemTotNghiep;
}
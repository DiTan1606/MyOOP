#include "cSinhVienCD.h"
void cSinhVienCD::nhap() {
	cSinhVien::nhap();
	cout << "nhap diem tot nghiep: ";
	cin >> diemTN;
}
bool cSinhVienCD::xetTN() {
	return (tongTC >= 110 && DTB >= 5 && diemTN >= 5);
}
float cSinhVienCD::getDTN() {
	return diemTN;
}
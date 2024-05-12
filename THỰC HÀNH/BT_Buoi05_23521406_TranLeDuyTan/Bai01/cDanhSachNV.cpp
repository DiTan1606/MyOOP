#include "cDanhSachNV.h"
cDanhSachNV::cDanhSachNV() {
	dsnvSX = NULL;
	dsnvVP = NULL;
}

int cDanhSachNV::sizeDSNVSX() {
	int cnt = 0;
	SX* p = dsnvSX;
	while (p != NULL) {
		cnt++;
		p = p->next;
	}
	return cnt;
}
int cDanhSachNV::sizeDSNVVP() {
	int cnt = 0;
	VP* p = dsnvVP;
	while (p != NULL) {
		cnt++;
		p = p->next;
	}
	return cnt;
}

SX* cDanhSachNV::makeDSNVSX() {
	SX* tmp = new SX();
	cNhanVienSX nvsx;
	nvsx.nhap();
	tmp->nvsx = nvsx;
	tmp->next = NULL;
	return tmp;
}
VP* cDanhSachNV::makeDSNVVP() {
	VP* tmp = new VP();
	cNhanVienVP nvvp;
	nvvp.nhap();
	tmp->nvvp = nvvp;
	tmp->next = NULL;
	return tmp;
}

void cDanhSachNV::appendDSNVSX() {
	SX* tmp = makeDSNVSX();
	if (dsnvSX == NULL) {
		dsnvSX = tmp;
	}
	else {
		SX* p = dsnvSX;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = tmp;
	}
}
void cDanhSachNV::appendDSNVVP() {
	VP* tmp = makeDSNVVP();
	if (dsnvVP == NULL) {
		dsnvVP = tmp;
	}
	else {
		VP* p = dsnvVP;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = tmp;
	}
}

void cDanhSachNV::xuatDSNVSX() {
	//cout << setfill('-') << setw(100) << "-" << endl;
	//cout << setfill(' ');
	//cout << setw(20) << "Ho ten" << setw(20) << "ngay sinh" << setw(20) << "luong can ban" << setw(20) << "so san pham" << setw(20) << "luong" << endl;
	//cout << setfill('-') << setw(90) << "-" << endl;
	//cout << setfill(' ');

	//CD* p = dssvCD;

	//while (p != NULL) {
	//	cout << setw(10) << p->svcd.getMSSV() << setw(20) << p->svcd.getHoTen() << setw(20) << p->svcd.getDiaChi() << setw(20) << p->svcd.getTongSoTinChi() << setw(10) << p->svcd.getDTB() << setw(10) << p->svcd.getDTN() << endl;
	//	p = p->next;
	//}
	//cout << setfill('-') << setw(90) << "-" << endl;
}
void cDanhSachNV::xuatDSNVVP() {

}
#include "cNongTrai.h"

void cNongTrai::nhap() {
	int slBo, slCuu, slDe;
	cout << "Nhap so luong cac loai gia suc trong nong trai:\n";
	cout << "Bo: "; cin >> slBo;
	cout << "Cuu: "; cin >> slCuu;
	cout << "De: "; cin >> slDe;
	nongTrai.push_back(new cBo(slBo));
	nongTrai.push_back(new cCuu(slCuu));
	nongTrai.push_back(new cDe(slDe));
}
void cNongTrai::xuat() {
	cout << setfill('-') << setw(80) << '-' << endl;
	cout << setfill(' ');
	cout << setw(10) << "Loai" << setw(10) << "SL" << setw(15) << "luong sua" << setw(15) << "Tieng keu" << endl;
	cout << setfill('-') << setw(80) << '-' << endl;
	cout << setfill(' ');
	for (cGiaSuc* gs : nongTrai) {
		gs->xuat();
	}
	cout << setfill('-') << setw(80) << '-' << endl;
}
int cNongTrai::tongSL() {
	int tongsl = 0;
	for (cGiaSuc* gs : nongTrai) {
		tongsl += gs->getSL();
	}
	return tongsl;
}
double cNongTrai::tongLuongSua() {
	double tongls = 0;
	for (cGiaSuc* gs : nongTrai) {
		tongls += gs->getLuongSua();
	}
	return tongls;
}
cGiaSuc* cNongTrai::getGiaSuc(int index) {
	return nongTrai[index - 1];
}


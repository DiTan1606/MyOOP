#include "cPhanSo.h"
cPhanSo::cPhanSo() {};
cPhanSo::cPhanSo(int tuso, int mauso) {
	this->tuso = tuso;
	this->mauso = mauso;
}
void cPhanSo::nhap() {
	cout << "nhap tu so: ";
	cin >> tuso;
	cout << "nhap mau so: ";
	cin >> mauso;
}
void cPhanSo::xuat() {
	if (mauso == 1) {
		cout << tuso;
	}
	else if (mauso == tuso) {
		cout << 1;
	}
	else if (tuso == 0) {
		cout << 0;
	}
	else if (mauso < 0) {
		cout << -tuso << "/" << -mauso;
	}
	else {
		cout << tuso << "/" << mauso;
	}
}
int UCLN(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return UCLN(b, a % b);
	}
}
cPhanSo cPhanSo::rutGon() {
	int ucln = UCLN(tuso, mauso);
	cPhanSo kq(tuso / ucln, mauso / ucln);
	return kq;
}
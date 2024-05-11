#include "cPhanSo.h"
cPhanSo::cPhanSo() {}
cPhanSo::cPhanSo(int tuso, int mauso) {
	this->tuso = tuso;
	this->mauso = mauso;
}

void cPhanSo::nhap() {
	cout << "nhap tu so: ";
	cin >> tuso;
	cout << "nhap mau so: ";
	cin >> mauso;
	if (mauso == 0) {
		cout << "phan so khong xac dinh";
		exit(1);
	}
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


cPhanSo cPhanSo::cong(cPhanSo p) {
	cPhanSo tong(tuso * p.mauso + mauso * p.tuso, mauso * p.mauso);
	return tong.rutGon();
}

cPhanSo cPhanSo::tru(cPhanSo p) {
	cPhanSo hieu(tuso * p.mauso - mauso * p.tuso, mauso * p.mauso);
	return hieu.rutGon();
}

cPhanSo cPhanSo::nhan(cPhanSo p) {
	cPhanSo tich(tuso * p.tuso, mauso * p.mauso);
	return tich.rutGon();
}

cPhanSo cPhanSo::chia(cPhanSo p) {
	cPhanSo thuong(tuso * p.mauso, mauso * p.tuso);
	return thuong.rutGon();
}

//get/set
int cPhanSo::getTuso() {
	return tuso;
}
int cPhanSo::getMauso() {
	return mauso;
}
void cPhanSo::setTuso(int tuso) {
	this->tuso = tuso;
}
void cPhanSo::setMauso(int mauso) {
	this->mauso = mauso;
}
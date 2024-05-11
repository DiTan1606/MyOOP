#include "cSoPhuc.h"
#include <iostream>
using namespace std;

cSoPhuc::cSoPhuc() {
	this->phanthuc = 0;
	this->phanao = 0;
}
cSoPhuc::cSoPhuc(float phanthuc, float phanao) {
	this->phanthuc = phanthuc;
	this->phanao = phanao;
}
void cSoPhuc::nhap() {
	cout << "nhap phan thuc: ";
	cin >> phanthuc;
	cout << "nhap phan ao: ";
	cin >> phanao;
}
void cSoPhuc::xuat() {
	if (phanthuc == 0 && phanao == 0) {
		cout << 0;
	}
	else if (phanthuc == 0) {
		cout << phanao << "i";
	}
	else if (phanao == 0) {
		cout << phanthuc;
	}
	else if (phanao > 0) {
		cout << phanthuc << "+" << phanao << "i";
	}
	else if (phanao < 0) {
		cout << phanthuc << "-" << -phanao << "i";
	}
}
cSoPhuc cSoPhuc::cong(cSoPhuc sp) {
	cSoPhuc kq(phanthuc + sp.phanthuc, phanao + sp.phanao);
	return kq;
}
cSoPhuc cSoPhuc::tru(cSoPhuc sp) {
	cSoPhuc kq(phanthuc - sp.phanthuc, phanao - sp.phanao);
	return kq;
}
cSoPhuc cSoPhuc::nhan(cSoPhuc sp) {
	cSoPhuc kq;
	float kqThuc = phanthuc * sp.phanthuc - phanao * sp.phanao;
	float kqAo = phanthuc * sp.phanao + phanao * sp.phanthuc;
	kq.setPhanthuc(kqThuc);
	kq.setPhanao(kqAo);
	return kq;
}
cSoPhuc cSoPhuc::chia(cSoPhuc sp) {
	cSoPhuc kq;
	float kqThuc = (phanthuc * sp.phanthuc + phanao * sp.phanao)/(sp.phanthuc* sp.phanthuc + sp.phanao* sp.phanao);
	float kqAo = (- phanthuc * sp.phanao + phanao * sp.phanthuc)/(sp.phanthuc * sp.phanthuc + sp.phanao * sp.phanao);
	kq.setPhanthuc(kqThuc);
	kq.setPhanao(kqAo);
	return kq;
}
//get/set
float cSoPhuc::getPhanthuc() {
	return phanthuc;
}
float cSoPhuc::getPhanao() {
	return phanao;
}
void cSoPhuc::setPhanthuc(float phanthuc) {
	this->phanthuc = phanthuc;
}
void cSoPhuc::setPhanao(float phanao) {
	this->phanao = phanao;
}
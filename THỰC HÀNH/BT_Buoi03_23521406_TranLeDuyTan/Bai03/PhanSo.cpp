#include "PhanSo.h"

PhanSo::PhanSo() {
	this->tuso = 1;
	this->mauso = 1;
}
PhanSo::PhanSo(int tuso, int mauso) {
	this->tuso = tuso;
	this->mauso = mauso;
}

int UCLN(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return UCLN(b, a % b);
	}
}
void PhanSo::rutgon() {
	int ucln = UCLN(tuso, mauso);
	tuso /= ucln;
	mauso /= ucln;
}

int PhanSo::getTuso() const{
	return tuso;
}
int PhanSo::getMauso() const{
	return mauso;
}
std::istream& operator>>(std::istream& is, PhanSo& ps) {
	std::string input;
	is >> input;

	std::istringstream iss(input);
	char slash;

	iss >> ps.tuso >> slash >> ps.mauso;
	if (ps.getMauso() == 0) {
		cout << "Khong xac dinh";
		exit(-1);
	}
	return is;
}
std::ostream& operator<<(std::ostream& os, const PhanSo& ps) {
	if (ps.getMauso() == 1) {
		os << ps.getTuso();
	}
	else if (ps.getMauso() == 0) {
		os << "Khong xac dinh";
		exit(-1);
	}
	else if (ps.getMauso() == ps.getTuso()) {
		os << 1;
	}
	else if (ps.getTuso() == 0) {
		os << 0;
	}
	else if (ps.getMauso() < 0) {
		os << - ps.getTuso() << "/" << - ps.getMauso();
	}
	else {
		os << ps.getTuso() << "/" << ps.getMauso();
	}
	return os;
}
PhanSo PhanSo::operator+(const PhanSo& other) const {
	int tuMoi = tuso * other.mauso + mauso * other.tuso;
	int mauMoi = mauso * other.mauso;
	return PhanSo(tuMoi, mauMoi);
}
PhanSo& PhanSo::operator=(const PhanSo& other) {
	if (this != &other) {
		tuso = other.tuso;
		mauso = other.mauso;
	}
	return *this;
}
bool PhanSo::operator>(const PhanSo& other) const {
	PhanSo tmp1(tuso, mauso);
	PhanSo tmp2(other.tuso, other.mauso);
	tmp1.tuso *= other.mauso;
	tmp1.mauso *= other.mauso;

	tmp2.tuso *= mauso;
	tmp2.mauso *= mauso;

	if (tmp1.tuso > tmp2.tuso) {
		return true;
	}
	else {
		return false;
	}
}
bool PhanSo::operator<(const PhanSo& other) const {
	PhanSo tmp1(tuso, mauso);
	PhanSo tmp2(other.tuso, other.mauso);
	tmp1.tuso *= other.mauso;
	tmp1.mauso *= other.mauso;

	tmp2.tuso *= mauso;
	tmp2.mauso *= mauso;

	if (tmp1.tuso < tmp2.tuso) {
		return true;
	}
	else {
		return false;
	}
}
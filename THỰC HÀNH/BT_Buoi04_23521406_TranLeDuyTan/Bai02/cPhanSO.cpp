#include "cPhanSo.h"
cPhanSo::cPhanSo() {}

cPhanSo::cPhanSo(int tu, int mau) : tu(tu), mau(mau) {}

int UCLN(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return UCLN(b, a % b);
	}
}

void cPhanSo::rutgon() {
	int ucln = UCLN(tu, mau);
	tu /= ucln;
	mau /= ucln;
}

ostream& operator<<(ostream& os, const cPhanSo& phanso) {
	cPhanSo ps = phanso;
	ps.rutgon();

	if (ps.tu == 0) {
		if (ps.mau == 0) {
			cout << "Khong xac dinh";
			exit(-1);
		}
		else {
			os << 0;
		}
	}
	else {
		if (ps.mau == 0) {
			cerr << "Khong xac dinh";
			exit(-1);
		}
		else if (ps.mau == 1) {
			os << ps.tu;
		} 
		else if (ps.mau < 0) {
			os << -ps.tu << "/" << -ps.mau;
		}
		else {
			os << ps.tu << "/" << ps.mau;
		}
	}
	return os;
}
istream& operator>>(istream& is, cPhanSo& ps) {
	string phanso;
	getline(is, phanso);

	phanso.erase(remove_if(phanso.begin(), phanso.end(), [](char ch) {return ch == ' '; }), phanso.end());

	size_t posChia = phanso.find('/');
	size_t posPhay = phanso.find('.');

	if (posChia != string::npos) {
		string strTu = phanso.substr(0, posChia);
		string strMau = phanso.substr(posChia + 1);

		ps.tu = int(stod(strTu));
		ps.mau = int(stod(strMau));
	}
	else if (posPhay != string::npos) {
		double temp = stod(phanso);
		int tempTu = int(floor(temp * 1000));
		int tempMau = 1000;

		int ucln = UCLN(abs(tempTu), tempMau);
		ps.tu = tempTu / ucln;
		ps.mau = tempMau / ucln;
	}
	else {
		ps.tu = int(stod(phanso));
		ps.mau = 1;
	}

	if (ps.mau == 0) {
		cout << "khong xac dinh";
		exit(-1);
	}

	return is;
}

cPhanSo cPhanSo::operator+(const cPhanSo& other) const {
	return cPhanSo(tu * other.mau + mau * other.tu, mau * other.mau);
}

cPhanSo operator+(const cPhanSo& ps, double real) {
	int tempTu = int(floor(real * 1000));
	int tempMau = 1000;

	int ucln = UCLN(abs(tempTu), tempMau);
	cPhanSo psReal(tempTu / ucln, tempMau / ucln);

	return ps + psReal;
}
cPhanSo operator+(double real, const cPhanSo& ps) {
	int tempTu = int(floor(real * 1000));
	int tempMau = 1000;

	int ucln = UCLN(abs(tempTu), tempMau);
	cPhanSo psReal(tempTu / ucln, tempMau / ucln);

	return ps + psReal;
}
cPhanSo operator+(const cPhanSo& ps, int nguyen) {
	cPhanSo psNguyen(nguyen, 1);

	return ps + psNguyen;
}
cPhanSo operator+(int nguyen, const cPhanSo& ps) {
	cPhanSo psNguyen(nguyen, 1);

	return ps + psNguyen;
}

cPhanSo cPhanSo::operator-(const cPhanSo& other) const {
	return cPhanSo(tu * other.mau - mau * other.tu, mau * other.mau);
}
cPhanSo operator-(const cPhanSo& ps, double real) {
	int tempTu = int(floor(real * 1000));
	int tempMau = 1000;

	int ucln = UCLN(abs(tempTu), tempMau);
	cPhanSo psReal(tempTu / ucln, tempMau / ucln);

	return ps - psReal;
}
cPhanSo operator-(double real, const cPhanSo& ps) {
	int tempTu = int(floor(real * 1000));
	int tempMau = 1000;

	int ucln = UCLN(abs(tempTu), tempMau);
	cPhanSo psReal(tempTu / ucln, tempMau / ucln);

	return psReal - ps;
}
cPhanSo operator-(const cPhanSo& ps, int nguyen) {
	cPhanSo psNguyen(nguyen, 1);

	return ps - psNguyen;
}
cPhanSo operator-(int nguyen, const cPhanSo& ps) {
	cPhanSo psNguyen(nguyen, 1);

	return psNguyen - ps;
}


cPhanSo cPhanSo::operator*(const cPhanSo& other) const {
	return cPhanSo(tu * other.tu, mau * other.mau);
}
cPhanSo operator*(const cPhanSo& ps, double real) {
	int tempTu = int(floor(real * 1000));
	int tempMau = 1000;

	int ucln = UCLN(abs(tempTu), tempMau);
	cPhanSo psReal(tempTu / ucln, tempMau / ucln);

	return ps * psReal;
}
cPhanSo operator*(double real, const cPhanSo& ps) {
	int tempTu = int(floor(real * 1000));
	int tempMau = 1000;

	int ucln = UCLN(abs(tempTu), tempMau);
	cPhanSo psReal(tempTu / ucln, tempMau / ucln);

	return ps * psReal;
}
cPhanSo operator*(const cPhanSo& ps, int nguyen) {
	cPhanSo psNguyen(nguyen, 1);

	return psNguyen * ps;
}
cPhanSo operator*(int nguyen, const cPhanSo& ps) {
	cPhanSo psNguyen(nguyen, 1);

	return psNguyen * ps;
}


cPhanSo cPhanSo::operator/(const cPhanSo& other) const {
	return cPhanSo(tu * other.mau, mau * other.tu);
}
cPhanSo operator/(const cPhanSo& ps, double real) {
	int tempTu = int(floor(real * 1000));
	int tempMau = 1000;

	int ucln = UCLN(abs(tempTu), tempMau);
	cPhanSo psReal(tempTu / ucln, tempMau / ucln);

	return ps / psReal;
}
cPhanSo operator/(double real, const cPhanSo& ps) {
	int tempTu = int(floor(real * 1000));
	int tempMau = 1000;

	int ucln = UCLN(abs(tempTu), tempMau);
	cPhanSo psReal(tempTu / ucln, tempMau / ucln);

	return psReal / ps;
}
cPhanSo operator/(const cPhanSo& ps,  int nguyen) {
	cPhanSo psNguyen(nguyen, 1);

	return ps / psNguyen;
}
cPhanSo operator/(int nguyen, const cPhanSo& ps) {
	cPhanSo psNguyen(nguyen, 1);

	return psNguyen / ps;
}


bool cPhanSo::operator==(const cPhanSo& other) {
	cPhanSo temp1 = *this;
	cPhanSo temp2 = other;
	temp1.rutgon();
	temp2.rutgon();
	return (temp1.tu == temp2.tu && temp1.mau == temp2.mau);
}
bool operator==(const cPhanSo& ps, double real) {
	int tempTu = int(floor(real * 1000));
	int tempMau = 1000;

	int ucln = UCLN(abs(tempTu), tempMau);
	cPhanSo psReal(tempTu / ucln, tempMau / ucln);

	return psReal == ps;
}
bool operator==(double real, const cPhanSo& ps) {
	int tempTu = int(floor(real * 1000));
	int tempMau = 1000;

	int ucln = UCLN(abs(tempTu), tempMau);
	cPhanSo psReal(tempTu / ucln, tempMau / ucln);

	return psReal == ps;
}
bool operator==(const cPhanSo& ps, int nguyen) {
	cPhanSo psNguyen(nguyen, 1);

	return psNguyen == ps;
}
bool operator==(int nguyen, const cPhanSo& ps) {
	cPhanSo psNguyen(nguyen, 1);

	return psNguyen == ps;
}



bool cPhanSo::operator!=(const cPhanSo& other) {
	return !(*this == other);
}
bool operator!=(const cPhanSo& ps, double real) {
	int tempTu = int(floor(real * 1000));
	int tempMau = 1000;

	int ucln = UCLN(abs(tempTu), tempMau);
	cPhanSo psReal(tempTu / ucln, tempMau / ucln);

	return psReal != ps;
}
bool operator!=(double real, const cPhanSo& ps) {
	int tempTu = int(floor(real * 1000));
	int tempMau = 1000;

	int ucln = UCLN(abs(tempTu), tempMau);
	cPhanSo psReal(tempTu / ucln, tempMau / ucln);

	return psReal != ps;
}
bool operator!=(const cPhanSo& ps, int nguyen) {
	cPhanSo psNguyen(nguyen, 1);

	return psNguyen != ps;
}
bool operator!=(int nguyen, const cPhanSo& ps) {
	cPhanSo psNguyen(nguyen, 1);

	return psNguyen != ps;
}



bool cPhanSo::operator>(const cPhanSo& other) {
	cPhanSo temp1 = *this;
	cPhanSo temp2 = other;
	temp1.rutgon();
	temp2.rutgon();
	double val1 = static_cast<double>(temp1.tu) / temp1.mau;
	double val2 = static_cast<double>(temp2.tu) / temp2.mau;
	return val1 > val2;
}
bool operator>(const cPhanSo& ps, double real) {
	cPhanSo temp1 = ps;
	temp1.rutgon();
	double val1 = static_cast<double>(temp1.tu) / temp1.mau;
	return val1 > real;
}
bool operator>(double real, const cPhanSo& ps) {
	cPhanSo temp1 = ps;
	temp1.rutgon();
	double val1 = static_cast<double>(temp1.tu) / temp1.mau;
	return real > val1;
}
bool operator>(const cPhanSo& ps, int nguyen) {
	cPhanSo temp1 = ps;
	temp1.rutgon();
	double val1 = static_cast<double>(temp1.tu) / temp1.mau;
	return val1 > nguyen;
}
bool operator>(int nguyen, const cPhanSo& ps) {
	cPhanSo temp1 = ps;
	temp1.rutgon();
	double val1 = static_cast<double>(temp1.tu) / temp1.mau;
	return val1 > nguyen;
}

bool cPhanSo::operator<(const cPhanSo& other) {
	return !(*this == other || *this > other);
}
bool operator<(const cPhanSo& ps, double real) {
	return !(ps == real || ps > real);
}
bool operator<(double real, const cPhanSo& ps) {
	return !(ps == real || real > ps);
}
bool operator<(const cPhanSo& ps, int nguyen) {
	return !(ps == nguyen || ps > nguyen);
}
bool operator<(int nguyen, const cPhanSo& ps) {
	return !(ps == nguyen || nguyen > ps);
}

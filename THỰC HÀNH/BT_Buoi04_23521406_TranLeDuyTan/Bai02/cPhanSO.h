#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class cPhanSo
{
private:
	int tu;
	int mau;
public:
	cPhanSo();
	cPhanSo(int, int);

	void rutgon();

	friend ostream& operator<<(ostream& os, const cPhanSo&);
	friend istream& operator>>(istream& is, cPhanSo&);

	cPhanSo operator+(const cPhanSo&) const;
	friend cPhanSo operator+(const cPhanSo&, double);
	friend cPhanSo operator+(double, const cPhanSo&);
	friend cPhanSo operator+(const cPhanSo&, int);
	friend cPhanSo operator+(int, const cPhanSo&);

	cPhanSo operator-(const cPhanSo&) const;
	friend cPhanSo operator-(const cPhanSo&, double);
	friend cPhanSo operator-(double, const cPhanSo&);
	friend cPhanSo operator-(const cPhanSo&, int);
	friend cPhanSo operator-(int, const cPhanSo&);

	cPhanSo operator*(const cPhanSo&) const;
	friend cPhanSo operator*(const cPhanSo&, double);
	friend cPhanSo operator*(double, const cPhanSo&);
	friend cPhanSo operator*(const cPhanSo&, int);
	friend cPhanSo operator*(int, const cPhanSo&);

	cPhanSo operator/(const cPhanSo&) const;
	friend cPhanSo operator/(const cPhanSo&, double);
	friend cPhanSo operator/(double, const cPhanSo&);
	friend cPhanSo operator/(const cPhanSo&, int);
	friend cPhanSo operator/(int, const cPhanSo&);

	bool operator==(const cPhanSo&);
	friend bool operator==(const cPhanSo&, double);
	friend bool operator==(double, const cPhanSo&);
	friend bool operator==(const cPhanSo&, int);
	friend bool operator==(int, const cPhanSo&);

	bool operator!=(const cPhanSo&);
	friend bool operator!=(const cPhanSo&, double);
	friend bool operator!=(double, const cPhanSo&);
	friend bool operator!=(const cPhanSo&, int);
	friend bool operator!=(int, const cPhanSo&);

	bool operator>(const cPhanSo&);
	friend bool operator>(const cPhanSo&, double);
	friend bool operator>(double, const cPhanSo&);
	friend bool operator>(const cPhanSo&, int);
	friend bool operator>(int, const cPhanSo&);

	bool operator<(const cPhanSo&);
	friend bool operator<(const cPhanSo&, double);
	friend bool operator<(double, const cPhanSo&);
	friend bool operator<(const cPhanSo&, int);
	friend bool operator<(int, const cPhanSo&);
};



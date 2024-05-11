#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class PhanSo
{
private:
	int tuso;
	int mauso;
public:
	PhanSo();
	PhanSo(int, int);
	void nhap();
	void xuat();
	int getTuso() const;
	int getMauso() const;
	void rutgon();
	double giaTriThuc() const;
	friend std::istream& operator>>(std::istream& is, PhanSo& ps);
	friend std::ostream& operator<<(std::ostream& os, const PhanSo& ps);

	PhanSo operator+(const PhanSo& other) const;
	PhanSo& operator=(const PhanSo& other);
	bool operator>(const PhanSo& other) const;
	bool operator<(const PhanSo& other) const;
};


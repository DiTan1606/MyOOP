#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

class cConNguoi
{
protected:
	string CCCD;
	string hoTen;
	string ngaySinh;
	string gioiTinh;
	string diaChi;
public:
	cConNguoi();
	void nhap();
	virtual void xuat() = 0;
};


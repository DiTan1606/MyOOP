#pragma once
#include <iostream>
#include <string>
using namespace std;

class cNhanVien
{
protected:
	string hoTen;
	string ngaySinh;
	double luong = tinhLuong();
public:
	cNhanVien();
	void nhap();
	double tinhLuong();
};


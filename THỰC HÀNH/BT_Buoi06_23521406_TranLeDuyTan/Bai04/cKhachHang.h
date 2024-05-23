#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
#include <algorithm>
using namespace std;

class cKhachHang
{
protected:
	string loai;

	string ten;
	int slHang;
	double donGia;
public:
	cKhachHang(string ten, int slHang, double donGia) : loai(loai), ten(ten), slHang(slHang), donGia(donGia) {}
	string getName() {
		return ten;
	}
	virtual double getTienPhaiTra() = 0;
	virtual ~cKhachHang() {}
};


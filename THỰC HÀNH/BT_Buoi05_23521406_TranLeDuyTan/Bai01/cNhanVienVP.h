#pragma once
#include "cNhanVien.h"
class cNhanVienVP :
	public cNhanVien
{
private:
	double soNgayLamViec;
public:
	cNhanVienVP();
	void nhap();
	double tinhLuong();
};


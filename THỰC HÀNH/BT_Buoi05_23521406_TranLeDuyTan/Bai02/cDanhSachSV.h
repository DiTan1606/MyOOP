#pragma once
#include "cSinhVien.h"
#include "cSinhVienCD.h"
#include "cSinhVienDH.h"
#include <vector>
class cDanhSachSV
{
private:
	vector <cSinhVienCD> dssvCD;
	vector <cSinhVienDH> dssvDH;
public:
	cDanhSachSV();
	void nhapDSSVCD();
	void nhapDSSVDH();
	void nhap();
	
	void xuatDSSVCD();
	void xuatDSSVDH();
	void xuat();

	cDanhSachSV DSSVDuDKTN();
	cDanhSachSV DSSVKhongDuDKTN();
	
	cDanhSachSV svdh_coDTB_caonhat();
};


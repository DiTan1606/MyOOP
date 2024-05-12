#pragma once
#include "cSinhVien.h"
#include "cSinhVienCD.h"
#include "cSinhVienDH.h"

struct CD {
	cSinhVienCD svcd;
	CD* next;
};

struct DH {
	cSinhVienDH svdh;
	DH* next;
};

class cDanhSachSV
{
private:
	CD* dssvCD;
	DH* dssvDH;
public:
	cDanhSachSV();

	int sizeDSSVCD();
	int sizeDSSVDH();

	CD* makeDSSVCD();
	DH* makeDSSVDH();

	CD* makeDSSVCD(cSinhVienCD svcd);
	DH* makeDSSVDH(cSinhVienDH svdh);

	void appendSVCD();
	void appendSVDH();

	void appendSVCD(CD* svcd);
	void appendSVDH(DH* svdh);

	void deleteSVCD(string mssv);
	void deleteSVDH(string mssv);

	void xuatDSSVCD();
	void xuatDSSVDH();

	cDanhSachSV DSSVDuDKTN();
	cDanhSachSV DSSVKhongDuDKTN();

	cDanhSachSV DSSVDHCoDTBCaoNhat();
};


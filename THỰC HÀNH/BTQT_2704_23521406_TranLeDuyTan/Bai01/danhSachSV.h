// MSSV: 23521406
// Ho va ten: Tran Le Duy Tan
// Ngay sinh: 16/6/2005
// lop: IT002.O221

#pragma once
#include "SVCaoDang.h"
#include "SVDaiHoc.h"

class danhSachSV
{
private:
	int slSVCaoDang;
	int slSVDaiHoc;
	SVCaoDang* DSSVCaoDang;
	SVDaiHoc* DSSVDaiHoc;
public:
	danhSachSV();
	void nhapDSSVCaoDang();
	void nhapDSSVDaiHoc();
	void nhap();
	void xuatDSSVCaoDang();
	void xuatDSSVDaiHoc();
	void xuat();
	int demSLSVDuDKTN();
	danhSachSV DSSVDaiHocCoDTBCaoNhat();
	~danhSachSV();
};


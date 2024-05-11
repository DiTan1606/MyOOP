// MSSV: 23521406
// Ho va ten: Tran Le Duy Tan
// Ngay sinh: 16/6/2005
// lop: IT002.O221

#include <iostream>
#include "danhSachSV.h"

int main()
{
	danhSachSV DSSV;
	DSSV.nhap();
	DSSV.xuat();
	cout << "So sinh vien du dieu kien tot nghiep: " << DSSV.demSLSVDuDKTN() << endl;
	cout << "Danh sach sinh vien dai hoc co diem TB cao nhat: " << endl;
	DSSV.DSSVDaiHocCoDTBCaoNhat().xuatDSSVDaiHoc();
}

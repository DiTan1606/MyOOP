#include <iostream>
#include "cDanhSachSV.h"

int main()
{
	cDanhSachSV dssv;
	dssv.nhap();
	dssv.xuat();
	cout << "DANH SACH SINH VIEN DU DIEU KIEN TOT NGHIEP\n";
	dssv.DSSVDuDKTN().xuat();
	cout << "DANH SACH SINH VIEN KHONG DU DIEU KIEN TOT NGHIEP\n";
	dssv.DSSVKhongDuDKTN().xuat();
	cout << "DANH SACH SINH VIEN DAI HOC CO DTB CAO NHAT\n";
	dssv.svdh_coDTB_caonhat().xuatDSSVDH();
}

#include <iostream>
#include "cDanhSachSV.h"

int main()
{
	cDanhSachSV dssv;
	int lc;
	
	while (1) {
		cout << "------------------------MENU-------------------------------------------\n";
		cout << "1. nhap danh sach sinh vien\n";
		cout << "2. xuat danh sach sinh vien\n";
		cout << "3. xuat danh sach sinh vien cao dang\n";
		cout << "4. xuat danh sach sinh vien dai hoc\n";
		cout << "5. xuat danh sach sinh vien du dieu kien tot nghiep\n";
		cout << "6. xuat danh sach sinh vien khong du dieu kien tot nghiep\n";
		cout << "7. xuat danh sach sinh vien dai hoc co diem trung binh cao nhat\n";
		cout << "khac: thoat\n";
		cout << "-----------------------------------------------------------------------\n";
		cout << "Nhap lua chon: "; cin >> lc;
		if (lc == 1) {
			system("cls");
			dssv.nhap();
		}
		else if (lc == 2) {
			system("cls");
			dssv.xuat();
		}
		else if (lc == 3) {
			system("cls");
			dssv.xuatDSSVCD();
		}
		else if (lc == 4) {
			system("cls");
			dssv.xuatDSSVDH();
		}
		else if (lc == 5) {
			system("cls");
			dssv.DSSVDuDKTN().xuat();
		}
		else if (lc == 6) {
			system("cls");
			dssv.DSSVKhongDuDKTN().xuat();
		}
		else if (lc == 7) {
			system("cls");
			dssv.svdh_coDTB_caonhat().xuatDSSVDH();
		}
		else {
			system("cls");
			break;
		}
	}
}

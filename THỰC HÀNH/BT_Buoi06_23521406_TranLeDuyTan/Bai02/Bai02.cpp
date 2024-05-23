#include <iostream>
#include "cDanhSachNV.h"

int main()
{
	cDanhSachNV ds;
	string lc;
	while (1) {
		cout << setfill('-') << setw(73) << '-';
		cout << "MENU";
		cout << setfill('-') << setw(73) << '-' << endl;

		cout << "1. nhap them nhan vien vao danh sach\n";
		cout << "2. xuat danh sach cac nhan vien co luong thap hon muc luong trung binh cua cac nhan vien trong cong ty: \n";
		cout << "3. xuat danh sach cac nhan vien co luong cao nhat\n";
		cout << "4. xuat danh sach cac nhan vien co luong thap nhat\n";
		cout << "5. xuat danh sach cac lap trinh vien co luong cao nhat\n";
		cout << "6. xuat danh sach cac kiem chung vien co luong thap nhat\n";
		cout << "7. thoat\n";
		cout << "khac: nhap lai\n";
		cout << setfill('-') << setw(150) << '-' << endl;
		ds.xuat();
		cout << setfill('-') << setw(150) << '-' << endl;
		cout << "nhap lua chon: ";
		cin >> lc;

		if (lc == "1") {
			system("cls");
			ds.nhap();
			system("cls");
		}
		else if (lc == "2") {
			system("cls");

			ds.dsnvLuongThapHonLuongTB().xuat();
		}
		else if (lc == "3") {
			system("cls");

			ds.dsnvCoLuongCaoNhat().xuat();
		}
		else if (lc == "4") {
			system("cls");

			ds.dsnvCoLuongThapNhat().xuat();
		}
		else if (lc == "5") {
			system("cls");

			ds.dsLTVCoLuongCaoNhat().xuat();
		}
		else if (lc == "6") {
			system("cls");

			ds.dsKCVCoLuongThapNhat().xuat();
		}
		else if (lc == "7") {
			system("cls");

			break;
		}
		else {
			system("cls");

			continue;
		}
	}
}

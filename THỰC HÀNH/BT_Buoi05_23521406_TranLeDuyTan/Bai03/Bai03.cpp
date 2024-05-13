#include <iostream>
#include "cConNguoi.h"
#include "cHocSinh.h"
#include "cSinhVien.h"
#include "cCongNhan.h"
#include "cNgheSi.h"
#include "cCaSi.h"

void hocSinh() {
	cHocSinh hs;
	string lc;
	while (1) {
		cout << endl;
		cout << "---------------------------------------------------HOCSINH----------------------------------------------------\n";
		cout << "1. nhap thong tin hoc sinh\n";
		cout << "2. xuat thong tin hoc sinh\n";
		cout << "3. thoat\n";
		cout << "khac: nhap lai\n";
		cout << "--------------------------------------------------------------------------------------------------------------\n";
		cout << "nhap lua chon: ";
		cin >> lc;
		if (lc == "1") {
			hs.nhap();
			system("cls");
		}
		else if (lc == "2") {
			system("cls");
			hs.xuat();
		}
		else if (lc == "3") {
			system("cls");
			break;
		}
		else {
			system("cls");
			continue;
		}
	}
}

void sinhVien() {
	cSinhVien sv;
	string lc;
	while (1) {
		cout << endl;
		cout << "-------------------------------------------------SINHVIEN----------------------------------------------------\n";
		cout << "1. nhap thong tin sinh vien\n";
		cout << "2. xuat thong tin sinh vien\n";
		cout << "3. thoat\n";
		cout << "khac: nhap lai\n";
		cout << "-------------------------------------------------------------------------------------------------------------\n";
		cout << "nhap lua chon: ";
		cin >> lc;
		if (lc == "1") {
			sv.nhap();
			system("cls");
		}
		else if (lc == "2") {
			system("cls");
			sv.xuat();
		}
		else if (lc == "3") {
			system("cls");
			break;
		}
		else {
			system("cls");
			continue;
		}
	}
}

void congNhan() {
	cCongNhan cn;
	string lc;
	while (1) {
		cout << endl;
		cout << "-------------------------------------------------CONGNHAN----------------------------------------------------\n";
		cout << "1. nhap thong tin cong nhan\n";
		cout << "2. xuat thong tin cong nhan\n";
		cout << "3. thoat\n";
		cout << "khac: nhap lai\n";
		cout << "--------------------------------------------------------------------------------------------------------------\n";
		cout << "nhap lua chon: ";
		cin >> lc;
		if (lc == "1") {
			cn.nhap();
			system("cls");
		}
		else if (lc == "2") {
			system("cls");
			cn.xuat();
		}
		else if (lc == "3") {
			system("cls");
			break;
		}
		else {
			system("cls");
			continue;
		}
	}
}

void ngheSi() {
	cNgheSi ns;
	string lc;
	while (1) {
		cout << endl;
		cout << "-------------------------------------------------NGHESI------------------------------------------------------\n";
		cout << "1. nhap thong tin nghe si\n";
		cout << "2. xuat thong tin nghe si\n";
		cout << "3. thoat\n";
		cout << "khac: nhap lai\n";
		cout << "--------------------------------------------------------------------------------------------------------------\n";
		cout << "nhap lua chon: ";
		cin >> lc;
		if (lc == "1") {
			ns.nhap();
			system("cls");
		}
		else if (lc == "2") {
			system("cls");
			ns.xuat();
		}
		else if (lc == "3") {
			system("cls");
			break;
		}
		else {
			system("cls");
			continue;
		}
	}
}

void caSi() {
	cCaSi cs;
	string lc;
	while (1) {
		cout << endl;
		cout << "-------------------------------------------------CASI--------------------------------------------------------\n";
		cout << "1. nhap thong tin ca si\n";
		cout << "2. xuat thong tin ca si\n";
		cout << "3. thoat\n";
		cout << "khac: nhap lai\n";
		cout << "--------------------------------------------------------------------------------------------------------------\n";
		cout << "nhap lua chon: ";
		cin >> lc;
		if (lc == "1") {
			cs.nhap();
			system("cls");
		}
		else if (lc == "2") {
			system("cls");
			cs.xuat();
		}
		else if (lc == "3") {
			system("cls");
			break;
		}
		else {
			system("cls");
			continue;
		}
	}
}

int main()
{
	string luachon;
	while(1) {
		cout << "-----------------------------------------------------MENU-----------------------------------------------------\n";
		cout << "1. thao tac voi doi tuong HOC SINH\n";
		cout << "2. thao tac voi doi tuong SINH VIEN\n";
		cout << "3. thao tac voi doi tuong CONG NHAN\n";
		cout << "4. thao tac voi doi tuong NGHE SI\n";
		cout << "5. thao tac voi doi tuong CA SI\n";
		cout << "6. thoat\n";
		cout << "khac: nhap lai\n";
		cout << "--------------------------------------------------------------------------------------------------------------\n";
		cout << "nhap lua chon: ";
		cin >> luachon;
		if (luachon == "1") {
			system("cls");
			hocSinh();
		}
		else if (luachon == "2") {
			system("cls");
			sinhVien();
		}
		else if (luachon == "3") {
			system("cls");
			congNhan();
		}
		else if (luachon == "4") {
			system("cls");
			ngheSi();
		}
		else if (luachon == "5") {
			system("cls");
			caSi();
		}
		else if (luachon == "6") {
			system("cls");
			break;
		}
		else {
			system("cls");
			continue;
		}
	}
}
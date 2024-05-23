#pragma once
#include "cSinhVienCD.h"
#include "cSinhVienDH.h"

class cDanhSachSV
{
private: 
	vector <cSinhVien*> dssv;
public:
	cDanhSachSV() {}
	
	void nhap() {
		string luachon;
		int sl;
		cout << "nhap so luong sinh vien can them vao: ";
		cin >> sl;

		for (int i = 0; i < sl;i++) {
			cSinhVien* sv;
			system("cls");
			cout << "sinh vien thu " << i+1 << " la:\n";
			cout << "---------------------\n";
			cout << "1. sinh vien CD\n";
			cout << "2. sinh vien DH\n";
			cout << "---------------------\n";
			cout << "nhap lua chon: ";
			cin >> luachon;

			if (luachon == "1") {
				sv = new cSinhVienCD;
			}
			else if (luachon == "2") {
				sv = new cSinhVienDH;
			}
			else {
				i--;
				continue;
			}
			sv->nhap();
			dssv.push_back(sv);
		}
	}
	void xuat() {
		int n = dssv.size();
		for (int i = 0; i < n;i++) {
			cout << setfill('-') << setw(120) << "-" << endl;
			cout << setfill(' ');
			cout << setw(3) << i+1;
			dssv[i]->xuat();
		}
		cout << setfill('-') << setw(120) << "-" << endl;
	}
	cDanhSachSV duDKTN() {
		cDanhSachSV dssvDuDKTN;
		for (cSinhVien* sv : dssv) {
			if (sv->xetTN()) {
				dssvDuDKTN.dssv.push_back(sv);
			}
		}
		return dssvDuDKTN;
	}
	cDanhSachSV khongDuDKTN() {
		cDanhSachSV dssvKhongDuDKTN;
		for (cSinhVien* sv : dssv) {
			if (!(sv->xetTN())) {
				dssvKhongDuDKTN.dssv.push_back(sv);
			}
		}
		return dssvKhongDuDKTN;
	}
	cDanhSachSV SVDHCoDTBCaoNhat() {
		cDanhSachSV dssvDHCoDTBCaoNhat;
		float max = FLT_MIN;
		for (cSinhVien* sv : dssv) {
			if (sv->getType() == "SVDH" && sv->getDTB() > max) {
				max = sv->getDTB();
			}
		}
		for (cSinhVien* sv : dssv) {
			if (sv->getType() == "SVDH" && sv->getDTB() == max) {
				dssvDHCoDTBCaoNhat.dssv.push_back(sv);
			}
		}
		return dssvDHCoDTBCaoNhat;
	}
	cDanhSachSV SVCDCoDTBCaoNhat() {
		cDanhSachSV dssvCDCoDTBCaoNhat;
		float max = FLT_MIN;
		for (cSinhVien* sv : dssv) {
			if (sv->getType() == "SVCD" && sv->getDTB() > max) {
				max = sv->getDTB();
			}
		}
		for (cSinhVien* sv : dssv) {
			if (sv->getType() == "SVCD" && sv->getDTB() == max) {
				dssvCDCoDTBCaoNhat.dssv.push_back(sv);
			}
		}
		return dssvCDCoDTBCaoNhat;
	}
	int SLSVCDKhongDuDKTN() {
		int dem = 0;
		for (cSinhVien* sv : dssv) {
			if (sv->getType() == "SVCD" && !(sv->xetTN())) {
				dem++;
			}
		}
		return dem;
	}
	int SLSVDHKhongDuDKTN() {
		int dem = 0;
		for (cSinhVien* sv : dssv) {
			if (sv->getType() == "SVDH" && !(sv->xetTN())) {
				dem++;
			}
		}
		return dem;
	}
};


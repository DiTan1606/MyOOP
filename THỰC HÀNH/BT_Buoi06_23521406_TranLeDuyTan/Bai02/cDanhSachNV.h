#pragma once
#include "cLapTrinhVien.h"
#include "cKiemChungVien.h"

class cDanhSachNV
{
private:
	vector <cNhanVien*> dsnv;
public:
	cDanhSachNV() {}
	void nhap() {
		int sl;
		cout << "nhap so luong nhan vien can them vao danh sach: ";
		cin >> sl;

		string lc;
		for (int i = 0; i < sl; i++) {
			cNhanVien* nv;
			system("cls");
			cout << "nhan vien thu " << i + 1 << " la:\n";
			cout << "-----------------------------\n";
			cout << "1. Lap trinh vien\n";
			cout << "2. Kiem chung vien\n";
			cout << "-----------------------------\n";
			cout << "nhap lua chon: ";
			cin >> lc;
			if (lc == "1") {
				nv = new cLapTrinhVien;
			}
			else if (lc == "2") {
				nv = new cKiemChungVien;
			}
			else {
				i--;
				continue;
			}
			nv->nhap();
			dsnv.push_back(nv);
		}
	}
	void xuat() {
		int n = dsnv.size();
		for (int i = 0; i < n; i++) {
			cout << setfill('-') << setw(150) << '-' << endl;
			cout << setfill(' ');
			cout << setw(3) << i + 1;
			dsnv[i]->xuat();
		}
		cout << setfill('-') << setw(150) << '-' << endl;
	}
	cDanhSachNV dsnvLuongThapHonLuongTB() {
		cDanhSachNV dsnvLuongThapHonLTB;
		double luongTB = 0;
		int n = dsnv.size();
		for (int i = 0; i < n; i++) {
			luongTB += dsnv[i]->getLuong();
		}
		luongTB /= n;
		cout << fixed << setprecision(1) << "Luong trung binh cua cong ty: " << luongTB << endl;
		for (cNhanVien* nv : dsnv) {
			if (nv->getLuong() < luongTB) {
				dsnvLuongThapHonLTB.dsnv.push_back(nv);
			}
		}
		return dsnvLuongThapHonLTB;
	}
	cDanhSachNV dsnvCoLuongCaoNhat() {
		cDanhSachNV dsnvcoluongcaonhat;
		double max = DBL_MIN;
		for (cNhanVien* nv : dsnv) {
			if (nv->getLuong() > max) {
				max = nv->getLuong();
			}
		}
		for (cNhanVien* nv : dsnv) {
			if (nv->getLuong() == max) {
				dsnvcoluongcaonhat.dsnv.push_back(nv);
			}
		}
		return dsnvcoluongcaonhat;
	}
	cDanhSachNV dsnvCoLuongThapNhat() {
		cDanhSachNV dsnvcoluongthapnhat;
		double min = DBL_MAX;
		for (cNhanVien* nv : dsnv) {
			if (nv->getLuong() < min) {
				min = nv->getLuong();
			}
		}
		for (cNhanVien* nv : dsnv) {
			if (nv->getLuong() == min) {
				dsnvcoluongthapnhat.dsnv.push_back(nv);
			}
		}
		return dsnvcoluongthapnhat;
	}
	cDanhSachNV dsLTVCoLuongCaoNhat() {
		cDanhSachNV dsltvcoluongcaonhat;
		double max = DBL_MIN;
		for (cNhanVien* nv : dsnv) {
			if (nv->getLuong() > max && nv->getType() == "Lap Trinh Vien") {
				max = nv->getLuong();
			}
		}
		for (cNhanVien* nv : dsnv) {
			if (nv->getLuong() == max && nv->getType() == "Lap Trinh Vien") {
				dsltvcoluongcaonhat.dsnv.push_back(nv);
			}
		}
		return dsltvcoluongcaonhat;
	}
	cDanhSachNV dsKCVCoLuongThapNhat() {
		cDanhSachNV dskcvcoluongthapnhat;
		double min = DBL_MAX;
		for (cNhanVien* nv : dsnv) {
			if (nv->getLuong() < min && nv->getType() == "Kiem Chung Vien") {
				min = nv->getLuong();
			}
		}
		for (cNhanVien* nv : dsnv) {
			if (nv->getLuong() == min && nv->getType() == "Kiem Chung Vien") {
				dskcvcoluongthapnhat.dsnv.push_back(nv);
			}
		}
		return dskcvcoluongthapnhat;
	}
};


#pragma once
#include "cKHLoaiA.h"
#include "cKHLoaiB.h"
#include "cKHLoaiC.h"

class cDanhSachKH
{
private:
	vector <cKhachHang*> dskh;
	int x, y, z;
public:
	~cDanhSachKH() {
		for (auto kh : dskh) {
			delete kh;
		}
	}

	void nhap(const string& filename) {
		ifstream inFile(filename);
		if (!inFile) {
			cerr << "khong the mo file" << filename << endl;
			exit(-1);
		}

		inFile >> x >> y >> z;
		inFile.close();
	}
	
	void docDSKH(const string& filename) {
		ifstream inFile(filename);
		if (!inFile) {
			cerr << "khong the mo file" << filename << endl;
			exit(-1);
		}

		inFile >> x >> y >> z;
		string ten;
		int slHang;
		double donGia;
		int soNamThanThiet;

		for (int i = 0; i < x; i++) {
			inFile >> ws;
			getline(inFile, ten);
			inFile >> slHang >> donGia;

			cKhachHang* kh = new cKHLoaiA(ten, slHang, donGia);
			dskh.push_back(kh);
		}
		for (int i = 0; i < y; i++) {
			inFile >> ws;
			getline(inFile, ten);
			inFile >> slHang >> donGia >> soNamThanThiet;

			cKhachHang* kh = new cKHLoaiB(ten, slHang, donGia, soNamThanThiet);
			dskh.push_back(kh);
		}
		for (int i = 0; i < z; i++) {
			inFile >> ws;
			getline(inFile, ten);
			inFile >> slHang >> donGia;

			cKhachHang* kh = new cKHLoaiC(ten, slHang, donGia);
			dskh.push_back(kh);
		}
		inFile.close();
	}

	void ghiDSKH(const string& filename) {
		ofstream outFile(filename);
		if (!outFile) {
			cerr << "Khong the mo file " << filename << endl;
			exit(-1);
		}

		double tongTien = 0.0;

		outFile << x << " " << y << " " << z << endl;

		for (cKhachHang* kh : dskh) {
			outFile << "------------------------------------------------\n";
			outFile << "Ten: " << kh->getName() << endl;
			outFile << "So tien phai tra: " << fixed << setprecision(1) << kh->getTienPhaiTra() << endl;
			tongTien += kh->getTienPhaiTra();
		}
		
		outFile << "------------------------------------------------\n";
		outFile << "Tong so tien cong ty thu duoc: " << fixed << setprecision(1) << tongTien << endl;
		outFile.close();
	}
};


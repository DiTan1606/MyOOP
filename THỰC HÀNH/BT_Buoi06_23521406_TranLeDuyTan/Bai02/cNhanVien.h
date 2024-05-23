#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

class cNhanVien
{
protected:
	string maNV;
	string hoTen;
	int tuoi;
	string sdt;
	string email;
	double luongCB;
public:
	cNhanVien() {}
	virtual string getType() = 0;
	virtual double getLuong() = 0;
	virtual void nhap() {
		cout << "nhap ma nhan vien: ";
		cin >> maNV;
		cout << "nhap ho va ten: ";
		cin.ignore();
		getline(cin, hoTen);
		cout << "nhap tuoi: ";
		cin >> tuoi;
		cout << "nhap so dien thoai: ";
		cin.ignore();
		getline(cin, sdt);
		cout << "nhap email: ";
		getline(cin, email);
		cout << "nhap luong co ban: ";
		cin >> luongCB;
	}
	virtual void xuat() {
		cout << setw(10) << maNV << setw(20) << hoTen << setw(5) << tuoi << setw(15) << sdt << setw(30) << email << setw(20) << fixed << setprecision(1) << luongCB;
	}
};


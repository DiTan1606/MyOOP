#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

class cSinhVien
{
protected:
	string mssv;
	string hoTen;
	string diaChi;
	int tongTC;
	float DTB;
public:
	cSinhVien() {}
	virtual string getType() = 0;
	virtual void nhap() {
		cout << "nhap mssv: ";
		cin >> mssv;
		cout << "nhap ho va ten: ";
		cin.ignore();
		getline(cin, hoTen);
		cout << "nhap dia chi: ";
		getline(cin, diaChi);
		cout << "nhap tong so tin chi: ";
		cin >> tongTC;
		cout << "nhap diem trung binh: ";
		cin.ignore();
		cin >> DTB;
	}
	virtual void xuat() {
		cout << setw(10) << mssv << setw(20) << hoTen << setw(15) << diaChi << setw(10) << tongTC << setw(10) << DTB;
	}
	virtual bool xetTN() = 0;
	float getDTB() {
		return DTB;
	}
};


#include <iostream>
#include "cArray.h"
int main()
{
	int n;
	cout << "nhap so hoc sinh trong mang: ";
	cin >> n;
	cArray arr;
	arr.nhapMang(n);
	cout << "hoc sinh co diem trung binh cao nhat la: ";
	cout << endl;
	arr.hsDiemTbCaoNhat().xuat();
	cout << endl;
	cout << "hoc sinh co diem trung binh thap nhat la: ";
	cout << endl;
	arr.hsDiemTbThapNhat().xuat();
	cout << endl;
}

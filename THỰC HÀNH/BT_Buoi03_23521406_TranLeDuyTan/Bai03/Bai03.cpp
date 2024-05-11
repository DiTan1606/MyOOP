#include <iostream>
#include "DSPhanSo.h"

int main()
{
	DSPhanSo list1;
	int n;
	cout << "nhap so phan so cua DS Phan so: "; 
	cin >> n;
	list1.nhapDSPhanSo(n);
	cout << "xuat DS Phan so: ";
	list1.xuatDSPhanSo();

	cout << "tong cac phan so trong DS: ";
	for (int i = 0; i < n-1; i++) {
		cout << list1.at(i) << " + ";
	}
	cout << list1.at(n - 1) << " = " << list1.tinhTong() << endl;
	cout << "Phan so lon nhat trong DS la: " << list1.findMax() << endl;
	cout << "Phan so nho nhat trong DS la: " << list1.findMin() << endl;

	cout << "Mang duoc sap xep tang dan la: ";
	list1.sapXepTangDan().xuatDSPhanSo();
	cout << "Mang duoc sap xep giam dan la: ";
	list1.sapXepGiamDan().xuatDSPhanSo();
}

#include "cArray.h"
cArray::cArray(){}
cArray::cArray(int n) {}
void cArray::nhapMang(int n) {
	size = n;
	arr = new cHocSinh[size];
	for (int i = 0; i < size; i++) {
		arr[i].nhap();
	}
}
void cArray::xuatMang() {
	for (int i = 0; i < size; i++) {
		arr[i].xuat();
		cout << endl;
	}
}
cHocSinh cArray::hsDiemTbCaoNhat() {
	int indexMax = 0;
	for (int i = 1; i < size; i++) {
		if (arr[i].diemTB() > arr[indexMax].diemTB()) {
			indexMax = i;
		}
	}
	return arr[indexMax];
}
cHocSinh cArray::hsDiemTbThapNhat() {
	int indexMin = 0;
	for (int i = 1; i < size; i++) {
		if (arr[i].diemTB() < arr[indexMin].diemTB()) {
			indexMin = i;
		}
	}
	return arr[indexMin];
}
cArray::~cArray() {
	delete[] arr;
}

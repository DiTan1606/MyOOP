#include "cArray.h"
cArray::cArray() {}
cArray::cArray(int n) {
	size = n;
	arr = new cPhanSo[size];
	for (int i = 0; i < size; i++) {
		arr[i];
	}
}
void cArray::nhapmang(int n) {
	size = n;
	arr = new cPhanSo[size];
	for (int i = 0; i < size; i++) {
		arr[i].nhap();
	}
}
void cArray::xuatmang() {
	for (int i = 0; i < size; i++) {
		arr[i].xuat();
		cout << " ";
	}
}
cPhanSo cArray::phansolonnhat() {
	cPhanSo max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i].lonhon(max)) {
			max = arr[i];
		}
	}
	return max;
}
cArray cArray::sapxeptangdan() {
	cArray a(size);
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i].lonhon(arr[j])) {
				cPhanSo temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		a.arr[i] = arr[i];
	}
	return a;
}
cArray cArray::sapxepgiamdan() {
	cArray a(size);
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[j].lonhon(arr[i])) {
				cPhanSo temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		a.arr[i] = arr[i];
	}
	return a;
}
cArray::~cArray() {
	delete[] arr;
}

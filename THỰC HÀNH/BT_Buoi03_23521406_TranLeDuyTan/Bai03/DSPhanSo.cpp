#include "DSPhanSo.h"

DSPhanSo::DSPhanSo() {}
DSPhanSo::DSPhanSo(int n) {
	size = n;
	arr = new PhanSo[size];
	for (int i = 0; i < size; i++) {
		arr[i];
	}
}
void DSPhanSo::nhapDSPhanSo(int n) {
	size = n;
	arr = new PhanSo[size];
	for (int i = 0; i < size; i++) {
		cout << "nhap phan so thu " << i + 1 << endl;
		cin >> arr[i];
	}
}
void DSPhanSo::xuatDSPhanSo() {
	for (int i = 0; i < size; i++) {
		arr[i].rutgon();
		cout << arr[i];
		cout << " ";
	}
	cout << endl;
}

PhanSo DSPhanSo::at(int index) {
	return arr[index];
}

PhanSo DSPhanSo::tinhTong() {
	PhanSo tong(0,1);
	for (int i = 0; i < size; i++) {
		tong = tong + arr[i];
	}
	tong.rutgon();
	return tong;
}

PhanSo DSPhanSo::findMax() {
	PhanSo max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

PhanSo DSPhanSo::findMin() {
	PhanSo min = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

DSPhanSo DSPhanSo::sapXepTangDan() {
	DSPhanSo tmpList(size);
	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			if (arr[i] > arr[j]) {
				PhanSo tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
		tmpList.arr[i] = arr[i];
	}
	return tmpList;
}

DSPhanSo DSPhanSo::sapXepGiamDan() {
	DSPhanSo tmpList(size);
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] < arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
		tmpList.arr[i] = arr[i];
	}
	return tmpList;
}

DSPhanSo::~DSPhanSo() {
	delete[] arr;
}


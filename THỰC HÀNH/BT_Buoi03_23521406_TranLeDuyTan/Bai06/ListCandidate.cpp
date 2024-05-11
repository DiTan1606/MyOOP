#include "ListCandidate.h"
ListCandidate::ListCandidate() {}
ListCandidate::ListCandidate(int n) {
	size = n;
	arr = new Candidate[size];
	for (int i = 0; i < size; i++) {
		arr[i];
	}
}
void ListCandidate::nhapDS(int n) {
	size = n;
	arr = new Candidate[size];
	for (int i = 0; i < size; i++) {
		cout << "nhap thi sinh thu " << i + 1 << endl;
		arr[i].nhap();
	}
}
void ListCandidate::xuatDS() {
	for (int i = 0; i < size; i++) {
		arr[i].xuat();
	}
}
void ListCandidate::xuatDSCoTongDiemLonHon(float a) {
	for (int i = 0; i < size; i++) {
		if (arr[i].tongDiem() > a) {
			arr[i].xuat();
		}
	}
}
string ListCandidate::thiSinhCoDiemCaoNhat() {
	Candidate max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i].tongDiem() > max.tongDiem()) {
			max = arr[i];
		}
	}
	return max.getName();
}
ListCandidate ListCandidate::sapXepGiamDanTheoTongDiem() {
	ListCandidate kq(*this);
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (kq.arr[i].tongDiem() < kq.arr[j].tongDiem()) {
				Candidate tmp = kq.arr[i];
				kq.arr[i] = kq.arr[j];
				kq.arr[j] = tmp;
			}
		}
	}
	return kq;
}
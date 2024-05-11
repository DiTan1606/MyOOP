#include <iostream>
#include "Array.h"

int main()
{
	int n, x;
	cout << "nhap so phan tu cua mang: ";
	cin >> n;
	Array a(n);
	cout << "tao mang ngau nhien: ";
	a.xuat();
	cout << "nhap x: ";
	cin >> x;
	cout << "so lan xuat hien cua x: " << a.demSoLanXuatHien(x) << endl;
	if (a.ktTangDan()) {
		cout << "mang tang dan" << endl;
	}
	else {
		cout << "mang khong tang dan" << endl;
	}
	cout << "so le nho nhat trong mang la: " << a.soLeNhoNhat() << endl;
	cout << "so nguyen to lon nhat trong mang la: " << a.SNTLonNhat() << endl;

	cout << "sap xep tang dan / giam dan bang Bubble Sort: " << endl;
	a.bubbleSort(Array::compareAscending).xuat();
	a.bubbleSort(Array::compareDescending).xuat();
	cout << endl;

	cout << "sap xep tang dan / giam dan bang Selection Sort: " << endl;
	a.selectionSort(Array::compareAscending).xuat();
	a.selectionSort(Array::compareDescending).xuat();
	cout << endl;

	cout << "sap xep tang dan / giam dan bang Insertion Sort: " << endl;
	a.insertionSort(Array::compareAscending).xuat();
	a.insertionSort(Array::compareDescending).xuat();
	cout << endl;

	cout << "sap xep tang dan / giam dan bang Interchange Sort: " << endl;
	a.interchangeSort(Array::compareAscending).xuat();
	a.interchangeSort(Array::compareDescending).xuat();
	cout << endl;
}
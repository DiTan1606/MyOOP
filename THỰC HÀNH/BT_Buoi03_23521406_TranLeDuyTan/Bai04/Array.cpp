#include "Array.h"

bool laSoNguyenTo(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

Array::Array() {}
Array::Array(int n) {
	size = n;
	arr = new int[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 201 - 100;
	}
}
void Array::xuat() {
	for (int i = 0; i < this->size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int Array::demSoLanXuatHien(int x) {
	int dem = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == x) {
			dem += 1;
		}
	}
	return dem;
}
bool Array::ktTangDan() {
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			return false;
		}
	}
	return true;
}
int Array::soLeNhoNhat() {
	int min = INT_MAX;
	for (int i = 0; i < size; i++) {
		if (arr[i]%2 != 0) {
			if (arr[i] < min) {
				min = arr[i];
			}
		}
	}
	if (min == INT_MAX) {
		cout << "mang khong co so le";
	}
	else {
		return min;
	}
}
int Array::SNTLonNhat() {
	int SNTMax = INT_MIN;
	for (int i = 0; i < size; i++) {
		if (laSoNguyenTo(arr[i])) {
			if (arr[i] > SNTMax) {
				SNTMax = arr[i];
			}
		}
	}
	if (SNTMax == INT_MIN) {
		cout << "mang khong co SNT";
	}
	else {
		return SNTMax;
	}
}

bool Array::compareAscending(int a, int b) {
    return a > b;
}
bool Array::compareDescending(int a, int b) {
    return a < b;
}
Array Array::bubbleSort(bool (*compare)(int, int)) {
	Array kq(*this);
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j) {
			if (compare(kq.arr[j], kq.arr[j + 1])) {
				int temp = kq.arr[j];
				kq.arr[j] = kq.arr[j + 1];
				kq.arr[j + 1] = temp;
			}
		}
	}
	return kq;
}
Array Array::selectionSort(bool (*compare)(int, int)) {
	Array kq(*this);
	for (int i = 0; i < size - 1; i++) {
		int pos = i;
		for (int j = i + 1; j < size; j++) {
			if (!compare(kq.arr[j], kq.arr[pos])) {
				pos = j;
			}
		}
		int temp = kq.arr[i];
		kq.arr[i] = kq.arr[pos];
		kq.arr[pos] = temp;
	}
	return kq;
}

Array Array::insertionSort(bool (*compare)(int, int)) {
	Array kq(*this);
	for (int i = 1; i < size; i++) {
		int x = kq.arr[i], pos = i - 1;
		while (pos >= 0 && !compare(x, kq.arr[pos])) {
			kq.arr[pos + 1] = kq.arr[pos];
			--pos;
		}
		kq.arr[pos + 1] = x;
	}
	return kq;
}

Array Array::interchangeSort(bool (*compare)(int, int)) {
	Array kq(*this);
	for (int i = 0; i < size-1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (compare(kq.arr[i], kq.arr[j])) {
				int temp = kq.arr[i];
				kq.arr[i] = kq.arr[j];
				kq.arr[j] = temp;
			}
		}
	}
	return kq;
}
 
//Array sortByheapSort();
//Array sortByMergeSort();
//Array sortByQuickSort();

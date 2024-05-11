#pragma once
#include <iostream>
#include <string>
#include <functional>
using namespace std;
class Array
{
private:
	int size;
	int* arr;
public:
	Array();
	Array(int);
	void xuat();
	int demSoLanXuatHien(int);
	bool ktTangDan();
	int soLeNhoNhat();
	int SNTLonNhat();
	static bool compareAscending(int a, int b);
	static bool compareDescending(int a, int b);

	Array bubbleSort(bool (*compare)(int, int));

	Array selectionSort(bool (*compare)(int, int));

	Array insertionSort(bool (*compare)(int, int));

	Array interchangeSort(bool (*compare)(int, int));


	//Array sortByheapSort();
	//Array sortByMergeSort();
	//Array sortByQuickSort();
};


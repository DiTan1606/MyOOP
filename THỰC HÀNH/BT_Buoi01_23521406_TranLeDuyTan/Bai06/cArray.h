#pragma once
#include <iostream>
#include "cHocSinh.h"
class cArray
{
private:
	int size;
	cHocSinh *arr;
public:
	cArray();
	cArray(int);
	void nhapMang(int);
	void xuatMang();
	cHocSinh hsDiemTbCaoNhat();
	cHocSinh hsDiemTbThapNhat();
	~cArray();
};


#include <iostream>
#include "cHocSinh.h"

int main()
{
	cHocSinh hs1;
	hs1.nhap();
	cout << "diem trung binh cua " << hs1.getHoTen() << " la: " << hs1.diemTB();
}

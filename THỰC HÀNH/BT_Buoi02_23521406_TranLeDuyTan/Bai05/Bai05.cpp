#include <iostream>
#include "cDate.h"
int main()
{
	cout << "Thiet lap d1: ";
	cDate d1(29, 3, 2024);
	d1.xuat();
	cout << endl;

	cout << "Lay ngay d1: " << d1.getDay() << endl;

	cout << "Thay doi ngay d1 thanh 20: ";
	d1.setDay(20);
	d1.xuat();
	cout << endl;

	cout << endl;
	cout << "Nhap d2: " << endl;
	cDate d2;
	d2.nhap();
	d2.xuat();
	cout << endl;

	cout << "Tang ngay thang nam d2 theo id, im, iy: ";
	int id, im, iy;
	cin >> id >> im >> iy;
	d2.tangDate(id, im, iy).xuat();
	cout << endl;

	cout << "Giam ngay thang nam d2 theo dd, dm, dy: ";
	int dd, dm, dy;
	cin >> dd >> dm >> dy;
	d2.giamDate(dd, dm, dy).xuat();
	cout << endl;

	cout << "Lay thu trong tuan cua ngay d2: ";
	d2.layThuTrongTuan();
	cout << "kiem tra nam nhuan cua d2: ";
	if (d2.isLeapYear()) {
		d2.xuat();
		cout << " la nam nhuan";
	}
	else {
		d2.xuat();
		cout << " khong la nam nhuan";
	}
}

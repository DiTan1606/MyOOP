#pragma once
#include <iostream>
using namespace std;
class cDate
{
private:
	int day;
	int month;
	int year;
public:
	cDate();
	cDate(int, int, int);
	void nhap();
	void xuat();

	bool isLeapYear();
	int daysInMonth();
	cDate nextDate();
};


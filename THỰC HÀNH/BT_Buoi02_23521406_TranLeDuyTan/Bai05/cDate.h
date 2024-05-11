#pragma once
#include <iostream>
#include <ctime>
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

	bool isDate();
	bool isLeapYear();
	int daysInMonth();

	void tangDay(int);
	void tangMonth(int);
	void tangYear(int);
	cDate tangDate(int, int, int);
	void giamDay(int);
	void giamMonth(int);
	void giamYear(int);
	cDate giamDate(int, int, int);
	void layThuTrongTuan();

	int getDay();
	int getMonth();
	int getYear();
	void setDay(int);
	void setMonth(int);
	void setYear(int);
};


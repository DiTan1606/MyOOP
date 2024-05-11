#pragma once
#include <iostream>
using namespace std;
class cTime
{
private:
	int hour;
	int min;
	int sec;
public:
	bool isTime();
	cTime();
	cTime(int, int, int);
	void nhap();
	void xuat();

	cTime tangTime(int, int, int);
	cTime giamTime(int, int, int);

	
	//get/set
	int getHour();
	int getMin();
	int getSec();

	void setHour(int);
	void setMin(int);
	void setSec(int);
};


#pragma once

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class cTime
{
private:
	int hour;
	int min;
	int sec;
public:
	cTime();
	cTime(int, int, int);
	bool isTime();
	friend ostream& operator<<(ostream& os, const cTime&);
	friend istream& operator>>(istream& is, cTime&);

	void rutgonTime();

	friend cTime operator+(const cTime&, int);

	friend cTime operator-(const cTime&, int);

	cTime& operator++();
	cTime operator++(int);

	cTime& operator--();
	cTime operator--(int);
};


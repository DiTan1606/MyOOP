#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <sstream>

class cDate
{
private:
	int day;
	int month;
	int year;
public:
	cDate();
	cDate(int, int, int);
	
	friend ostream& operator<<(ostream& os, const cDate&);
	friend istream& operator>>(istream& is, cDate&);

	friend cDate operator+(const cDate&, int);
	friend cDate operator-(const cDate&, int);
	friend int operator- (const cDate&, const cDate&);


	cDate& operator++();
	cDate operator++(int);

	cDate& operator--();
	cDate operator--(int);

	bool isDate();
	bool isLeapYear();
	int daysInMonth();

	void rutgon();
};


#include <iostream>
#include <sstream>
#include <string>
using namespace std;

#pragma once
class cSoPhuc
{
private:
	float thuc;
	float ao;
public:
	cSoPhuc();
	cSoPhuc(float, float);
	cSoPhuc operator+(const cSoPhuc&) const;
	friend cSoPhuc operator+(const cSoPhuc&, float);
	friend cSoPhuc operator+(float, const cSoPhuc&);

	cSoPhuc operator-(const cSoPhuc&) const;
	friend cSoPhuc operator-(const cSoPhuc&, float);
	friend cSoPhuc operator-(float, const cSoPhuc&);

	cSoPhuc operator*(const cSoPhuc&) const;
	friend cSoPhuc operator*(const cSoPhuc&, float);
	friend cSoPhuc operator*(float, const cSoPhuc&);

	cSoPhuc operator/(const cSoPhuc&) const;
	friend cSoPhuc operator/(const cSoPhuc&, float);
	friend cSoPhuc operator/(float, const cSoPhuc&);

	bool operator==(const cSoPhuc&);
	friend bool operator==(const cSoPhuc&, float);
	friend bool operator==(float, const cSoPhuc&);

	bool operator!=(const cSoPhuc&);
	friend bool operator!=(const cSoPhuc&, float);
	friend bool operator!=(float, const cSoPhuc&);

	friend ostream& operator<<(ostream& os, const cSoPhuc&);
	friend istream& operator>>(istream& is, cSoPhuc&);
};


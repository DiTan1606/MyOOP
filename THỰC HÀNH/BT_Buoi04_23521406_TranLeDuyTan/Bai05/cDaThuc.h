#pragma once
#include <iostream>
#include <vector>
using namespace std;

class cDaThuc
{
private:
	vector<float> heso;
public:
	cDaThuc();
	cDaThuc(vector<float>);
	friend ostream& operator<<(ostream& os, const cDaThuc&);
	friend istream& operator>>(istream& is, cDaThuc&);
	friend cDaThuc operator+(const cDaThuc&, const cDaThuc&);
	friend cDaThuc operator-(const cDaThuc&, const cDaThuc&);
	double tinhGiaTri(double) const;
};


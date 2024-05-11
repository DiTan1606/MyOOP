#pragma once
#include <iostream>
#include <vector>
using namespace std;

class CVector
{
private:
	vector<double> elements;
public:
	CVector();
	CVector(vector <double>);
	int size() const;
	double& operator[](int i) {
		return elements[i];
	}
	const double& operator[](int i) const {
		return elements[i];
	}
	double tichVoHuong(const CVector&) const;
	friend ostream& operator<<(ostream& os, const CVector&);
	friend istream& operator>>(istream& is, CVector&);
	CVector operator+(const CVector&) const;
	CVector operator-(const CVector&) const;
	CVector operator*(int) const;
	friend CVector operator*(int, const CVector&);
};


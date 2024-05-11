#pragma once
#include <vector>
#include <iostream>
#include "CVector.h"
using namespace std;

class CMatrix
{
private:
	vector<vector<double>> elements;
public:
	CMatrix();
	CMatrix(vector<vector<double>>);
	int rows() const;
	int cols() const;
	double& operator()(int row, int col) {
		return elements[row][col];
	}
	const double& operator()(int row, int col) const {
		return elements[row][col];
	}
	friend ostream& operator<<(std::ostream& os, const CMatrix&);
	friend istream& operator>>(std::istream& is, CMatrix&);
	CMatrix transpose() const;
	CMatrix operator+(const CMatrix&) const;
	CMatrix operator-(const CMatrix&) const;
	CMatrix operator*(double) const;
	friend CMatrix operator*(double k, const CMatrix&);
	CMatrix operator*(const CMatrix& other) const;
	friend CVector operator*(const CMatrix& matrix, const CVector& vector);
};


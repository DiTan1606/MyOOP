#pragma once
#include <iostream>
using namespace std;

class Diem
{
private:
	float x, y;
public:
	Diem();
	Diem(double, double);
	void nhap();
	void xuat();
	double getX();
	double getY();
	void setX(double);
	void setY(double);
	~Diem();
};


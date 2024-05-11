#pragma once
#include <iostream>
using namespace std;
class cPoint
{
private:
	float x;
	float y;
public:
	//khoi tao
	cPoint();
	cPoint(float, float);
	void nhap();
	void xuat();

	//thao tac
	void tinhTien(float, float);

	//set / get
	float getX();
	float getY();
	void setX(float);
	void setY(float);
};
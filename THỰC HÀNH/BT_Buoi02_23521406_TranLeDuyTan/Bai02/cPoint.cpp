#include "cPoint.h"
//khoi tao
cPoint::cPoint() {
	this->x = 0;
	this->y = 0;
}
cPoint::cPoint(float x, float y) {
	this->x = x;
	this->y = y;
}
void cPoint::nhap() {
	cout << "nhap x = ";
	cin >> x;
	cout << "nhap y = ";
	cin >> y;
}
void cPoint::xuat() {
	cout << "(" << x << ";" << y << ")" << endl;
}
//thao tac
void cPoint::tinhTien(float dx, float dy) {
	x += dx;
	y += dy;
}

//set / get
float cPoint::getX() {
	return x;
}
float cPoint::getY() {
	return y;
}
void cPoint::setX(float x) {
	this->x = x;
}
void cPoint::setY(float y) {
	this->y = y;
}
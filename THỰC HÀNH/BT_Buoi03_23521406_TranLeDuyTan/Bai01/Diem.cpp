#include "Diem.h"

Diem::Diem() {
	x = 0;
	y = 0;
}
Diem::Diem(double x, double y) {
	x = x;
	y = y;
}
void Diem::nhap() {
	cout << "nhap x: "; cin >> x;
	cout << "nhap y: "; cin >> y;
}
void Diem::xuat() {
	cout << "(" << x << "," << y << ") " ;
}
double Diem::getX() {
	return x;
}
double Diem::getY() {
	return y;
}

void Diem::setX(double x) {
	this->x = x;
}
void Diem::setY(double y) {
	this->y = y;
}

Diem::~Diem() {}
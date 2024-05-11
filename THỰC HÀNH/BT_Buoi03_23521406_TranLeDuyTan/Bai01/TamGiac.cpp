#include "TamGiac.h"
#include <cmath>
#include <math.h>
const float M_PI = 3.14159265358979323846;
TamGiac::TamGiac() {}
TamGiac::TamGiac(double xA, double yA, double xB, double yB, double xC, double yC) : A(xA, yA),B(xB,yB),C(xC,yC) {}
void TamGiac::nhapTamGiac() {
	cout << "nhap diem A: \n"; A.nhap();
	cout << "nhap diem B: \n"; B.nhap();
	cout << "nhap diem C: \n"; C.nhap();
}
void TamGiac::xuatTamGiac() {
	A.xuat();
	B.xuat();
	C.xuat();
    cout << endl;
}
void TamGiac::TinhTien(double dx, double dy) {
	A.setX(A.getX() + dx);
	A.setY(A.getY() + dy);

	B.setX(B.getX() + dx);
	B.setY(B.getY() + dy);

	C.setX(C.getX() + dx);
	C.setY(C.getY() + dy);
}
void TamGiac::quay(float goc) {
    float trungX = (A.getX() + B.getX() + C.getX()) / 3.0;
    float trungY = (A.getY() + B.getY() + C.getY()) / 3.0;

    A.setX(A.getX() - trungX);
    B.setX(B.getX() - trungX);
    C.setX(C.getX() - trungX);

    A.setY(A.getY() - trungY);
    B.setY(B.getY() - trungY);
    C.setY(C.getY() - trungY);

    float radian = goc * M_PI / 180.0; 
    float cosTheta = cos(radian);
    float sinTheta = sin(radian);
    float x1New = A.getX() * cosTheta - A.getY() * sinTheta;
    float y1New = A.getX() * sinTheta + A.getY() * cosTheta;
    float x2New = B.getX() * cosTheta - B.getY() * sinTheta;
    float y2New = B.getX() * sinTheta + B.getY() * cosTheta;
    float x3New = C.getX() * cosTheta - C.getY() * sinTheta;
    float y3New = C.getX() * sinTheta + C.getY() * cosTheta;

    A.setX(x1New + trungX);
    A.setY(y1New + trungY);
    B.setX(x2New + trungX);
    B.setY(y2New + trungY);
    C.setX(x3New + trungX);
    C.setY(y3New + trungY);
}

void TamGiac::phongto(float heso) {
    float trungX = (A.getX() + B.getX() + C.getX()) / 3.0;
    float trungY = (A.getY() + B.getY() + C.getY()) / 3.0;

    A.setX(A.getX() - trungX);
    B.setX(B.getX() - trungX);
    C.setX(C.getX() - trungX);

    A.setY(A.getY() - trungY);
    B.setY(B.getY() - trungY);
    C.setY(C.getY() - trungY);

    float x1New = A.getX() * heso;
    float y1New = A.getY() * heso;

    float x2New = B.getX() * heso;
    float y2New = B.getY() * heso;

    float x3New = C.getX() * heso;
    float y3New = C.getY() * heso;

    A.setX(x1New + trungX);
    A.setY(y1New + trungY);
    B.setX(x2New + trungX);
    B.setY(y2New + trungY);
    C.setX(x3New + trungX);
    C.setY(y3New + trungY);
}

void TamGiac::thunho(float heso) {
    phongto(1 / heso);
}



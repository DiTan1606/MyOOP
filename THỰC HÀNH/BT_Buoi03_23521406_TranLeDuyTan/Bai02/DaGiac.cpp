#include "DaGiac.h"
const float M_PI = 3.14159265358979323846;
DaGiac::DaGiac() {
    soDinh = 0;
    dinh = nullptr;
}

DaGiac::DaGiac(int n) {
    soDinh = n;
    dinh = new Diem[soDinh];
}

DaGiac::~DaGiac() {
    delete[] dinh;
}

void DaGiac::nhapDaGiac() {
    cout << "Nhap so dinh cua da giac: ";
    cin >> soDinh;
    dinh = new Diem[soDinh];
    cout << "Nhap toa do cac dinh:\n";
    for (int i = 0; i < soDinh; ++i) {
        cout << "Nhap toa do dinh thu " << i + 1 << ":\n";
        dinh[i].nhap();
    }
}

void DaGiac::xuatDaGiac() {
    cout << "Da giac co " << soDinh << " dinh:\n";
    for (int i = 0; i < soDinh; ++i) {
        dinh[i].xuat();
    }
    cout << endl;
}

void DaGiac::tinhTien(double dx, double dy) {
    for (int i = 0; i < soDinh; ++i) {
        dinh[i].setX(dinh[i].getX() + dx);
        dinh[i].setY(dinh[i].getY() + dy);
    }
}

void DaGiac::quay(float goc) {
    float trungX = 0;
    float trungY = 0;
    for (int i = 0; i < soDinh; ++i) {
        trungX += dinh[i].getX();
        trungY += dinh[i].getY();
    }
    trungX /= soDinh;
    trungY /= soDinh;

    for (int i = 0; i < soDinh; ++i) {
        float x = dinh[i].getX() - trungX;
        float y = dinh[i].getY() - trungY;

        float radian = goc * M_PI / 180.0;
        float cosTheta = cos(radian);
        float sinTheta = sin(radian);
        float xNew = x * cosTheta - y * sinTheta;
        float yNew = x * sinTheta + y * cosTheta;

        dinh[i].setX(xNew + trungX);
        dinh[i].setY(yNew + trungY);
    }
}

void DaGiac::phongTo(float heso) {
    float trungX = 0;
    float trungY = 0;
    for (int i = 0; i < soDinh; ++i) {
        trungX += dinh[i].getX();
        trungY += dinh[i].getY();
    }
    trungX /= soDinh;
    trungY /= soDinh;

    for (int i = 0; i < soDinh; ++i) {
        float x = dinh[i].getX() - trungX;
        float y = dinh[i].getY() - trungY;

        x *= heso;
        y *= heso;

        dinh[i].setX(x + trungX);
        dinh[i].setY(y + trungY);
    }
}

void DaGiac::thuNho(float heso) {
    phongTo(1 / heso);
}
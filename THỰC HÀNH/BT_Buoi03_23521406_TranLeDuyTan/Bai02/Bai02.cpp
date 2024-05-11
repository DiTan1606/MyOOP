#include <iostream>
#include "DaGiac.h"

int main() {
    DaGiac daGiac;
    cout << "Nhap da giac:\n";
    daGiac.nhapDaGiac();
    cout << "Xuat da giac:\n";
    daGiac.xuatDaGiac();

    cout << "Tinh tien theo vector(dx,dy) \n";
    double dx, dy;
    cout << "nhap dx: "; cin >> dx;
    cout << "nhap dy: "; cin >> dy;
    daGiac.tinhTien(dx, dy);
    cout << "xuat da giac sau khi tinh tien: ";
    daGiac.xuatDaGiac();

    cout << "Quay da giac mot goc: ";
    float a;
    cin >> a;
    cout << "Xuat tam giac sau khi quay: ";
    daGiac.quay(a);
    daGiac.xuatDaGiac();

    cout << "Phong to da giac voi he so: ";
    float heso;
    cin >> heso;
    cout << "Xuat da giac sau khi phong to: ";
    daGiac.phongTo(heso);
    daGiac.xuatDaGiac();

    cout << "Thu nho da giac voi he so: ";
    float heso2;
    cin >> heso2;
    cout << "Xuat da giac sau khi thu nho: ";
    daGiac.thuNho(heso2);
    daGiac.xuatDaGiac();

    return 0;
}

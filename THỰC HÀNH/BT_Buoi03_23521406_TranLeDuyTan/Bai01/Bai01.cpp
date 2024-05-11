#include <iostream>
#include "TamGiac.h"

int main()
{
    TamGiac abc;
    cout << "nhap tam giac: \n";
    abc.nhapTamGiac();
    cout << "xuat tam giac: ";
    abc.xuatTamGiac();

    cout << "Tinh tien theo vector(dx,dy) \n";
    double dx, dy;
    cout << "nhap dx: "; cin >> dx;
    cout << "nhap dy: "; cin >> dy;
    abc.TinhTien(dx, dy);
    cout << "xuat tam giac sau khi tinh tien: ";
    abc.xuatTamGiac();

    cout << "Quay tam giac mot goc: ";
    float a;
    cin >> a;
    cout << "Xuat tam giac sau khi quay: ";
    abc.quay(a);
    abc.xuatTamGiac();

    cout << "Phong to tam giac voi he so: ";
    float heso;
    cin >> heso;
    cout << "Xuat tam giac sau khi phong to: ";
    abc.phongto(heso);
    abc.xuatTamGiac();

    cout << "Thu nho tam giac voi he so: ";
    float heso2;
    cin >> heso2;
    cout << "Xuat tam giac sau khi thu nho: ";
    abc.thunho(heso2);
    abc.xuatTamGiac();
}

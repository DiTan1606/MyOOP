#include <iostream>
#include "cPhanSo.h"

int main()
{
    cPhanSo ps1;
    ps1.nhap();
    cout << "phan so da nhap: ";
    ps1.xuat();
    cout << endl;
    cout << "phan so sau khi rut gon: ";
    ps1.rutGon().xuat();
    cout << endl;
}

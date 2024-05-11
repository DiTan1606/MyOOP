#include <iostream>
#include "cPhanSo.h"

int main()
{
    cPhanSo ps1, ps2;
    ps1.nhap();
    ps2.nhap();
    cout << "phan so lon nhat trong hai phan so "; 
    ps1.rutGon().xuat(); 
    cout << " va "; 
    ps2.rutGon().xuat(); 
    cout << " la: ";
    ps1.sosanh(ps2).rutGon().xuat();
}

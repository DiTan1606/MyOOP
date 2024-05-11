#include <iostream>
#include "cPhanSo.h"

int main()
{
    cPhanSo ps1, ps2;
    ps1.nhap();
    ps2.nhap();
    ps1.xuat(); cout << " + "; ps2.xuat(); cout << " = "; ps1.cong(ps2).rutGon().xuat(); cout << endl;
    ps1.xuat(); cout << " - "; ps2.xuat(); cout << " = "; ps1.tru(ps2).rutGon().xuat(); cout << endl;
    ps1.xuat(); cout << " x "; ps2.xuat(); cout << " = "; ps1.nhan(ps2).rutGon().xuat(); cout << endl;
    ps1.xuat(); cout << " : "; ps2.xuat(); cout << " = "; ps1.chia(ps2).rutGon().xuat(); cout << endl;
}


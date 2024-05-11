#include <iostream>
#include "cDate.h"

int main()
{
    cDate d;
    d.nhap();
    cout << "ngay da nhap: ";
    d.xuat();
    cout << endl;
    cout << "ngay tiep theo: ";
    d.nextDate().xuat();
}


#include <iostream>
#include "cPhanSo.h"
#include "cArray.h"
int main()
{
    int n;
    cout << "nhap so phan so cua mang: ";
    cin >> n;
    cArray arr;
    arr.nhapmang(n);
    cout << endl;
    arr.xuatmang();
    cout << endl;
    cout << "phan so lon nhat la: ";
    arr.phansolonnhat().xuat();
    cout << endl;
    cout << "mang sau khi sap xep tang dan: ";
    arr.sapxeptangdan().xuatmang();
    cout << endl;
    cout << "mang sau khi sap xep giam dan: ";
    arr.sapxepgiamdan().xuatmang();
}

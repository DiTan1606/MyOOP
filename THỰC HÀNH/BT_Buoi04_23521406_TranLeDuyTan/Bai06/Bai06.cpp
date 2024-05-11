#include <iostream>
#include "CMatrix.h"
int main()
{
    CVector vt1, vt2;

    cout << "nhap 2 vecto: \n";
    cin >> vt1;
    cin >> vt2;
    cout << "xuat 2 vecto: \n";
    cout << vt1 << endl;
    cout << vt2 << endl;
    int x;
    cout << "nhap x: "; cin >> x;
    cout << "truy suat phan tu thu " << x;
    cout << vt1[x];
    cout << vt1 << " + " << vt2 << " = " << vt1 + vt2 << endl;
    cout << vt1 << " - " << vt2 << " = " << vt1 - vt2 << endl;
    int k;
    cout << "nhap so nguyen k: "; cin >> k;
    cout << vt1 << " * " << k << " = " << vt1 * 2 << endl;
    cout << k << " * " << vt2 << " = " << k * vt2 << endl;
    cout << "tinh tich vo huong vt1, vt2: ";
    cout << vt1.tichVoHuong(vt2);

    CMatrix a, b;
    cout << "nhap 2 ma tran\n";
    cin >> a;
    cin >> b;
    cout << "xuat 2 ma tran\n";
    cout << a << endl;
    cout << b << endl;
    cout << "xuat 2 ma tran chuyen vi\n";
    cout << a.transpose() << endl;
    cout << b.transpose() << endl;
    cout << "truy suat phan tu tai vi tri 0,0: ";
    cout << a(0, 0) << endl;
    cout << a << " + " << b << " = " <<  a+ b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;

    cout << a * 3 << endl;
    cout << 3 * a << endl;
    cout << a * vt1 << endl;
}

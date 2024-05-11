#include <iostream>
#include "cString.h"
int main()
{
    cout << "Thiet lap chuoi s1: ";
    cString s1("Tran Le Duy Tan");
    s1.xuat();
    cout << endl;

    cout << "Nhap chuoi s2: ";
    cString s2;
    s2.nhap();
    cout << "Chuoi s2: ";
    s2.xuat();
    cout << endl;

    cout << "Do dai chuoi s1: " << s1.length() << endl;
    cout << "Do dai chuoi s2: " << s2.length() << endl;

    cout << "Noi chuoi s1 voi chuoi s2: ";
    s1.noiChuoi(s2).xuat();
    cout << endl;

    cout << "Dao chuoi s1: ";
    s1.daoChuoi().xuat();
    cout << endl;

    cout << "Viet hoa chuoi s1: ";
    s1.vietHoa().xuat();
    cout << endl;

    cout << "Viet thuong chuoi s2: ";
    s2.vietThuong().xuat();
    cout << endl;
}
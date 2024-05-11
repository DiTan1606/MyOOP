#include <iostream>
#include "cPoint.h"
using namespace std;

int main()
{
    cPoint p1(1, 0), p2(3, 4);
    cout << "thiet lap 2 diem p1, p2:" << endl;
    cout << "Xuat p1, p2: " << endl;
    p1.xuat();
    p2.xuat();
    cout << "lay hoanh do cua diem p2: " << p2.getX() << endl;
    cout << "Thay doi tung do cua p1 thanh 5: ";
    p1.setY(5);
    p1.xuat();

    cPoint p3, p4;
    cout << "Nhap p3, p4: " << endl;
    p3.nhap();
    p4.nhap();
    cout << "Xuat p3, p4: " << endl;
    p3.xuat();
    p4.xuat();
    cout << "tinh tien p3 theo dx, dy" << endl;
    int dx, dy;
    cout << "nhap dx: ";
    cin >> dx;
    cout << "nhap dy: ";
    cin >> dy;
    cout << "p3 sau khi tinh tien: ";
    p3.tinhTien(dx, dy);
    p3.xuat();

}


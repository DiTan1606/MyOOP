#include <iostream>
#include "cTime.h"
using namespace std;
int main()
{
    cout << "Thiet lap t1: ";
    cTime t1(10, 20, 50);
    t1.xuat();
    cout << endl;

    cout << "Lay gio t1: " << t1.getHour() << endl;
    cout << "Thay doi phut t1 thanh 30: ";
    t1.setMin(30);
    t1.xuat();
    cout << endl;

    cout << "Nhap t2: " << endl;
    cTime t2;
    t2.nhap();
    t2.xuat();
    cout << endl;

    cout << "Tang thoi gian t2 theo ih, im, is: ";
    int ih, im, is;
    cin >> ih >> im >> is;
    t2.tangTime(ih, im, is).xuat();
    cout << endl;

    cout << "Giam thoi gian t2 theo dh, dm, ds: ";
    int dh, dm, ds;
    cin >> dh >> dm >> ds;
    t2.giamTime(dh, dm, ds).xuat();
    cout << endl;
}

#include <iostream>
#include  "cDate.h"
#include "TKTK.h"

int main()
{
    // thiet lap ngay
    cDate d1;
     
    // nhap xuat ngay
    cout << "nhap ngay d1 (dd/mm/yyyy): "; cin >> d1;
    cout << "xuat ngay d1: " << d1 << endl;

    // thuc hien cac phep tinh cong tru mot so ngay 
    int d;
    cout << "nhap d: "; cin >> d;
    cout << d1 << " + " << d << " = " << d1 + d << endl;
    cout << d1 << " - " << d << " = " << d1 - d << endl;

    // thuc hien phep toan ++ -- date
    d1++;
    cout << "sau khi cong mot ngay: " << d1 << endl;
    --d1;
    cout << "sau khi tru mot ngay: " << d1 << endl;

    // ap dung giai bai toan tinh lai suat tien gui ngan hang
    // thiet lap thong tin tai khoan tiet kiem
    TKTK tktk;
    
    // nhap thong tin tai khoan tiet kiem
    cout << "nhap thong tin tai khoan tiet kiem: \n";
    cin >> tktk;

    // tinh so lai va xuat ra thong tin tai khoan tiet kiem
    cout << "Thong tin tai khoan tiet kiem: \n" << tktk;
}

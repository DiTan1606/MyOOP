#pragma once
#include "cNhanVien.h"
static const double luongMoiGioOVT = 200000;
class cLapTrinhVien :
    public cNhanVien
{
private:
    int soGioOVT;
public:
    cLapTrinhVien() {}
    string getType() {
        return "Lap Trinh Vien";
    }
    double getLuong() {
        return luongCB + soGioOVT * luongMoiGioOVT;
    }
    void nhap() {
        cNhanVien::nhap();
        cout << "nhap so gio lam overtime: ";
        cin >> soGioOVT;
    }
    void xuat() {
        cout << setw(20) << getType();
        cNhanVien::xuat();
        cout << setw(5) << soGioOVT << setw(15) << getLuong() << endl;
    }
};


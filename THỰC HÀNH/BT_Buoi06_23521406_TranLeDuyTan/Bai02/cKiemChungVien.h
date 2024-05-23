#pragma once
#include "cNhanVien.h"
static const double luongMoiLoi = 50000;
class cKiemChungVien :
    public cNhanVien
{
private:
    int soLoi;
public:
    cKiemChungVien() {}
    string getType() {
        return "Kiem Chung Vien";
    }
    double getLuong() {
        return luongCB + soLoi * luongMoiLoi;
    }
    void nhap() {
        cNhanVien::nhap();
        cout << "nhap so loi: ";
        cin >> soLoi;
    }
    void xuat() {
        cout << setw(20) << getType();
        cNhanVien::xuat();
        cout << setw(5) << soLoi << setw(15) << getLuong() << endl;
    }
};


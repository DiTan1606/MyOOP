#pragma once
#include "cSinhVien.h"
class cSinhVienCD :
    public cSinhVien
{
private:
    float DTN;
public:
    cSinhVienCD() {}
    string getType() {
        return "SVCD";
    }
    void nhap() {
        cSinhVien::nhap();
        cout << "nhap diem tot nghiep: ";
        cin >> DTN;
    }
    void xuat() {
        cout << setw(7) << getType();
        cSinhVien::xuat();
        cout << setw(10) << DTN << endl;
    }
    bool xetTN() {
        return (tongTC >= 120 && DTB >= 5 && DTN >= 5);
    }
};


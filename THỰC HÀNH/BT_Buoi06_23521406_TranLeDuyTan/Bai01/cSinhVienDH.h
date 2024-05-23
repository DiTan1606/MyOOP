#pragma once
#include "cSinhVien.h"
class cSinhVienDH :
    public cSinhVien
{
private:
    string tenLV;
    float diemLV;
public:
    cSinhVienDH() {}
    string getType() {
        return "SVDH";
    }
    void nhap() {
        cSinhVien::nhap();
        cout << "nhap ten luan van: ";
        cin.ignore();
        getline(cin, tenLV);
        cout << "nhap diem luan van: ";
        cin >> diemLV;
    }
    void xuat() {
        cout << setw(7) << getType();
        cSinhVien::xuat();
        cout << setw(20) << tenLV << setw(15) << diemLV << endl;
    }
    bool xetTN() {
        return (tongTC >= 170 && DTB >= 5 && diemLV >= 5);
    }
};


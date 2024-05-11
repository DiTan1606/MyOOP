#pragma once
#include "cSinhVien.h"

class cSinhVienDH :
    public cSinhVien
{
private:
    string tenLuanVan;
    float diemLuanVan;
public:
    void nhap();
    bool xetTN();
    string getTenLuanVan();
    float getDLV();
};


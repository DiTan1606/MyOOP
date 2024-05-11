#pragma once
#include "cSinhVien.h"

class cSinhVienCD :
    public cSinhVien
{
private:
    float diemTN;
public:
    void nhap();
    bool xetTN();
    float getDTN();
};


#pragma once
#include "cConNguoi.h"
class cSinhVien :
    public cConNguoi
{
private:
    string tenTruong;
    string tenNganh;
    float GPA;
public:
    cSinhVien();
    void nhap();
    void xuat();
};


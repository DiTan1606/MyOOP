#pragma once
#include "cConNguoi.h"
class cHocSinh :
    public cConNguoi
{
private:
    string tenTruong;
    string tenLop;
    string DTB;
public:
    cHocSinh();
    void nhap();
    void xuat();
};


#pragma once
#include "cConNguoi.h"
class cCaSi :
    public cConNguoi
{
private:
    string theLoaiNhac;
    string tenBaiHat;
public:
    cCaSi();
    void nhap();
    void xuat();
};


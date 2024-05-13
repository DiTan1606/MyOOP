#pragma once
#include "cConNguoi.h"
class cNgheSi :
    public cConNguoi
{
private:
    string vaiTro;
    string tacPhamNgheThuat;
public:
    cNgheSi();
    void nhap();
    void xuat();
};


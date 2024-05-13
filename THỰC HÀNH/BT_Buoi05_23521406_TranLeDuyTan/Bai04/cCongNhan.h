#pragma once
#include "cConNguoi.h"
class cCongNhan :
    public cConNguoi
{
private:
    int soNgayLamViec;
    double luong;
public:
    cCongNhan();
    double tinhLuong();
    void nhap();
    void xuat();
};


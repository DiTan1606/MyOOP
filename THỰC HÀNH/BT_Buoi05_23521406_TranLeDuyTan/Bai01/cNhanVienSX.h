#pragma once
#include "cNhanVien.h"
class cNhanVienSX :
    public cNhanVien
{
private:
    double luongCanBan;
    int soSanPham;
public:
    cNhanVienSX();
    void nhap();
    double tinhLuong();
};


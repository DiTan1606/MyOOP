#pragma once
#include "cKhachHang.h"
class cKHLoaiA :
    public cKhachHang
{
public:
    cKHLoaiA(string ten, int slHang, double donGia) : cKhachHang(ten, slHang, donGia) {}
    double getTienPhaiTra() {
        return slHang * donGia * 1.1;
    }
};


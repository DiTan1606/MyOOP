#pragma once
#include "cKhachHang.h"
class cKHLoaiC :
    public cKhachHang
{
public:
    cKHLoaiC(string ten, int slHang, double donGia) : cKhachHang(ten, slHang, donGia) {}
    double getTienPhaiTra() {
        return (slHang * donGia) * 0.5 * 1.1;
    }
};


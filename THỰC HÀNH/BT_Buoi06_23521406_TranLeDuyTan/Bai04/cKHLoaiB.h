#pragma once
#include "cKhachHang.h"
#include <algorithm>
class cKHLoaiB :
    public cKhachHang
{
private:
    int soNamThanThiet;
public:
    cKHLoaiB(string ten, int slHang, double donGia, int soNamThanThiet) : cKhachHang(ten, slHang, donGia), soNamThanThiet(soNamThanThiet) {}
    double getTienPhaiTra() {
        double khuyenmai = max(soNamThanThiet * 0.05, 0.5);
        return (slHang * donGia) * (1 - khuyenmai) * 1.1;
    }
};


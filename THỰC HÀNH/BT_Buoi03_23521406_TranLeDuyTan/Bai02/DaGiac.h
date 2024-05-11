#pragma once
#include "Diem.h"

class DaGiac {
private:
    Diem* dinh;
    int soDinh;
public:
    DaGiac();
    DaGiac(int);
    ~DaGiac();
    void nhapDaGiac();
    void xuatDaGiac();
    void tinhTien(double, double);
    void quay(float);
    void phongTo(float);
    void thuNho(float);
};

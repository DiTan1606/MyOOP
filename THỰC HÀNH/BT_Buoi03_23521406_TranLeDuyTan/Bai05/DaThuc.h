#pragma once
#include <iostream>
#include<vector>
#include <cmath>
using namespace std;

class DaThuc {
private:
    int bac;
    double* heso;

public:
    DaThuc();
    DaThuc(int);
    ~DaThuc();
    void nhap();
    void xuat();
    double tinhGiaTri(double);
    DaThuc cong(const DaThuc&);
    DaThuc tru(const DaThuc&);
};

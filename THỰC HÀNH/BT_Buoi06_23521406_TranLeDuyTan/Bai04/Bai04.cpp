#include <iostream>
#include "cDanhSachKH.h"

int main()
{
    cDanhSachKH ds;
    ds.nhap("XYZ.INP");
    ds.docDSKH("XYZ.INP");
    ds.ghiDSKH("XYZ.OUT");
    return 0;
}

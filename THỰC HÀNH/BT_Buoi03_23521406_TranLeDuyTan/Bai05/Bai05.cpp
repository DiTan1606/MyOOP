#include "DaThuc.h"

int main() {
    int x;

    cout << "Nhap da thuc thu nhat:" << endl;
    DaThuc dathuc1;
    dathuc1.nhap();
    cout << "P(x) = ";
    dathuc1.xuat();

    cout << "Nhap da thuc thu hai:" << endl;
    DaThuc dathuc2;
    dathuc2.nhap();
    cout << "Q(x) = ";
    dathuc2.xuat();

    cout << "nhap x = ";
    cin >> x;
    cout << "gia tri cua da thuc khi x = " << x << endl;
    cout << "P(" << x << ") = " << dathuc1.tinhGiaTri(x) << endl;
    cout << "Q(" << x << ") = " << dathuc2.tinhGiaTri(x) << endl;

    DaThuc tong = dathuc1.cong(dathuc2);
    DaThuc hieu = dathuc1.tru(dathuc2);

    cout << "Tong hai da thuc" << endl;
    cout << "P(x) + Q(x) = ";
    tong.xuat();
    cout << "Hieu hai da thuc:" << endl;
    cout << "P(x) - Q(x) = ";
    hieu.xuat();
    return 0;
}
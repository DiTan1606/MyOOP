#include "DaThuc.h"
using namespace std;

DaThuc::DaThuc() {}

DaThuc::DaThuc(int bac = 0) : bac(bac) {
    heso = new double[bac + 1];
    for (int i = 0; i <= bac; ++i) {
        heso[i] = 0;
    }
}

DaThuc::~DaThuc() {
    delete[] heso;
}

void DaThuc::nhap() {
    do {
        cout << "Nhap bac cua da thuc: ";
        cin >> bac;
    } while (bac < 0);
    heso = new double[bac + 1];
    for (int i = bac; i >= 0; i--) {
        cout << "Nhap he so a" << i << ": ";
        cin >> heso[i];
    }
}

void DaThuc::xuat() {
    for (int i = bac; i >= 0; i--) {
        if (heso[i] != 0) {
            if (heso[i] > 0 && i != bac-1) {
                cout << " + ";
            }
            else if (heso[i] < 0){ 
                cout << " - ";
            }

            if (i == 0) {
                cout << abs(heso[i]);
            }
            else if (i == 1) {
                cout << abs(heso[i]) << "x";
            }
            else if (abs(heso[i]) == 1) {
                cout << "x^" << i;
            }
            else {
                cout << abs(heso[i]) << "x^" << i;
            }
        }
    }
    cout << endl;
}

double DaThuc::tinhGiaTri(double x) {
    double gt = 0;
    for (int i = bac; i >= 0; i--) {
        gt += heso[i] * pow(x, i);
    }
    return gt;
}

DaThuc DaThuc::cong(const DaThuc& dathuc) {
    int new_bac = max(bac, dathuc.bac);
    DaThuc result(new_bac);
    for (int i = 0; i <= new_bac; ++i) {
        if (i <= bac) {
            result.heso[i] += heso[i];
        }
        if (i <= dathuc.bac) {
            result.heso[i] += dathuc.heso[i];
        }
    }
    return result;
}

DaThuc DaThuc::tru(const DaThuc& dathuc) {
    int new_bac = max(bac, dathuc.bac);
    DaThuc result(new_bac);
    for (int i = 0; i <= new_bac; ++i) {
        if (i <= bac) {
            result.heso[i] += heso[i];
        }
        if (i <= dathuc.bac) {
            result.heso[i] -= dathuc.heso[i];
        }
    }
    return result;
}

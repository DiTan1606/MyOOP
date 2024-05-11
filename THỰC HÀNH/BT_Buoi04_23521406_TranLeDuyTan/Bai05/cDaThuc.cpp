#include "cDaThuc.h"
cDaThuc::cDaThuc() {}
cDaThuc::cDaThuc(vector<float> hs) {
	heso = hs;
}
ostream& operator<<(ostream& os, const cDaThuc& dt) {
    int bac = dt.heso.size() - 1;
    for (int i = bac; i >= 0; i--) {
        double coef = dt.heso[i];
        if (coef != 0) {
            if (coef < 0) {
                os << " - ";
                coef = -coef; 
            }
            else if (i != bac) {
                os << " + ";
            }

            if (coef != 1 || i == 0) {
                os << coef;
            }

            if (i > 0) {
                os << "x";
                if (i > 1)
                    os << "^" << i;
            }
        }
    }
    return os;
}
istream& operator>>(istream& is, cDaThuc& dt) {
    cout << "nhap bac cua da thuc: ";
    int bac;
    is >> bac;
    dt.heso.resize(bac + 1);
    for (int i = bac; i >= 0; i--) {
        cout << "nhap he so cua x^" << i << ": ";
        is >> dt.heso[i];
    }
    return is;
}
cDaThuc operator+(const cDaThuc& dt1, const cDaThuc& dt2) {
    int max_degree = max(dt1.heso.size(), dt2.heso.size());

    cDaThuc result;

    for (int i = 0; i < max_degree; i++) {
        double coef1 = (i < dt1.heso.size()) ? dt1.heso[i] : 0;
        double coef2 = (i < dt2.heso.size()) ? dt2.heso[i] : 0;
        result.heso.push_back(coef1 + coef2);
    }

    return result;
}
cDaThuc operator-(const cDaThuc& dt1, const cDaThuc& dt2) {
    int max_degree = max(dt1.heso.size(), dt2.heso.size());

    cDaThuc result;

    for (int i = 0; i < max_degree; i++) {
        double coef1 = (i < dt1.heso.size()) ? dt1.heso[i] : 0;
        double coef2 = (i < dt2.heso.size()) ? dt2.heso[i] : 0;
        result.heso.push_back(coef1 - coef2);
    }

    return result;
}
double cDaThuc::tinhGiaTri(double x) const {
    double result = 0.0;
    double power = 1.0;

    for (int i = 0; i < heso.size(); ++i) {
        result += heso[i] * power;
        power *= x;
    }

    return result;
}
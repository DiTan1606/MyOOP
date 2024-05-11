#include "CVector.h"
CVector::CVector() {}
CVector::CVector(vector <double> elems) : elements(elems) {}
int CVector::size() const {
	return elements.size();
}

double CVector::tichVoHuong(const CVector& other) const {
    if (size() != other.size()) {
        cout << "2 vector khong co cung kich thuoc\n";
        exit(-1);
    }
    double result = 0.0;
    for (int i = 0; i < size(); ++i) {
        result += elements[i] * other.elements[i];
    }
    return result;
}
ostream& operator<<(ostream& os, const CVector& vec) {
    cout << "(";
    for (int i = 0; i < vec.size()-1; ++i) {
        os << vec.elements[i] << " , ";
    }
    os << vec.elements[vec.size()-1];
    cout << ")";
    return os;
}
istream& operator>>(istream& is, CVector& vec) {
    int n;
    cout << "Nhap kich thuoc vector: ";
    is >> n;
    cout << "Nhap " << n << " phan tu cua vector:\n";
    vec.elements.resize(n);
    for (int i = 0; i < n; ++i) {
        is >> vec.elements[i];
    }
    return is;
}
CVector CVector::operator+(const CVector& other) const {
    if (size() != other.size()) {
        cout << "2 vector khong co cung kich thuoc\n";
        exit(-1);
    }
    vector<double> result;
    for (int i = 0; i < size(); ++i) {
        result.push_back(elements[i] + other.elements[i]);
    }
    return CVector(result);
}
CVector CVector::operator-(const CVector& other) const {
    if (size() != other.size()) {
        cout << "2 vector khong co cung kich thuoc\n";
        exit(-1);
    }
    vector<double> result;
    for (int i = 0; i < size(); ++i) {
        result.push_back(elements[i] - other.elements[i]);
    }
    return CVector(result);
}
CVector CVector::operator*(int k) const {
    vector<double> result;
    for (int i = 0; i < size(); ++i) {
        result.push_back(elements[i] * k);
    }
    return CVector(result);
}
CVector operator*(int k, const CVector& vec) {
    return vec * k;
}

#include "CMatrix.h"
CMatrix::CMatrix() {}
CMatrix::CMatrix(vector<vector<double>> elems) : elements(elems) {}
int CMatrix::rows() const {
	return elements.size();
}
int CMatrix::cols() const {
	if (rows() == 0) return 0;
	return elements[0].size();
}

ostream& operator<<(ostream& os, const CMatrix& mat) {
    for (int i = 0; i < mat.rows(); ++i) {
        for (int j = 0; j < mat.cols(); ++j) {
            os << mat.elements[i][j] << " ";
        }
        os << "\n";
    }
    return os;
}
istream& operator>>(istream& is, CMatrix& mat) {
    int rows, cols;
    cout << "nhap so hang: "; is >> rows;
    cout << "nhap so cot: "; is >> cols;
    if ((rows == 0 && cols == 0) || rows < 0 || cols < 0) {
        cout << "so hang, so cot khong hop le";
        exit(-1);
    }
    cout << "nhap " << rows << " hang va " << cols << " cot cua ma tran:\n";
    mat.elements.resize(rows, vector<double>(cols));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            is >> mat.elements[i][j];
        }
    }
    return is;
}
CMatrix CMatrix::transpose() const {
    CMatrix transposed;
    int m = rows(), n = cols();
    transposed.elements.resize(n, vector<double>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            transposed.elements[i][j] = elements[j][i];
        }
    }
    return transposed;
}
CMatrix CMatrix::operator+(const CMatrix& other) const {
    if (rows() != other.rows() || cols() != other.cols()) {
        cout << "Ma tran phai co cung kich thuoc de cong\n";
        exit(-1);
    }
    CMatrix result;
    result.elements.resize(rows(), std::vector<double>(cols()));
    for (int i = 0; i < rows(); ++i) {
        for (int j = 0; j < cols(); ++j) {
            result.elements[i][j] = elements[i][j] + other.elements[i][j];
        }
    }
    return result;
}
CMatrix CMatrix::operator-(const CMatrix& other) const {
    if (rows() != other.rows() || cols() != other.cols()) {
        cout << "Ma tran phai co cung kich thuoc de tru\n";
        exit(-1);
    }
    CMatrix result;
    result.elements.resize(rows(), std::vector<double>(cols()));
    for (int i = 0; i < rows(); ++i) {
        for (int j = 0; j < cols(); ++j) {
            result.elements[i][j] = elements[i][j] - other.elements[i][j];
        }
    }
    return result;
}
CMatrix CMatrix::operator*(double k) const {
    CMatrix result;
    result.elements.resize(rows(), vector<double>(cols()));
    for (int i = 0; i < rows(); ++i) {
        for (int j = 0; j < cols(); ++j) {
            result.elements[i][j] = elements[i][j] * k;
        }
    }
    return result;
}
CMatrix operator*(double k, const CMatrix& mat) {
    return mat * k;
}
CMatrix CMatrix::operator*(const CMatrix& other) const {
    int m1 = rows(), n1 = cols(), m2 = other.rows(), n2 = other.cols();
    if (n1 != m2) {
        cout << "So cot trong ma tran thu nhat phai bang so hang trong ma tran thu hai de nhan.\n";
        exit(-1);
    }
    CMatrix result;
    result.elements.resize(m1, std::vector<double>(n2));
    for (int i = 0; i < m1; ++i) {
        for (int j = 0; j < n2; ++j) {
            for (int k = 0; k < n1; ++k) {
                result.elements[i][j] += elements[i][k] * other.elements[k][j];
            }
        }
    }
    return result;
}
CVector operator*(const CMatrix& matrix, const CVector& vector) {
    int m = matrix.rows();
    int n = matrix.cols();
    if (n != vector.size()) {
        cout << "So cot cua ma tran phai bang kich thuoc cua vecto de nhan.\n";
        exit(-1);
    }
    CVector result;
    for (int i = 0; i < m; ++i) {
        double sum = 0.0;
        for (int j = 0; j < n; ++j) {
            sum += matrix(i, j) * vector[j];
        }
        result[i] = sum;
    }
    return result;
}
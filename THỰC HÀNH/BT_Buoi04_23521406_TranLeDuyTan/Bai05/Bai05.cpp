#include "cDaThuc.h"

int main() {
	// thiet lap da thuc
	cDaThuc p, q;

	// nhap da thuc
	cout << "nhap vao da thuc P(x): \n";
	cin >> p;
	cout << "nhap vao da thuc Q(x): \n";
	cin >> q;

	// xuat da thuc
	cout << "xuat 2 da thuc:\n";
	cout << "P(x) = " << p << endl;
	cout << "Q(x) = " << q << endl;
	
	// tinh gia tri da thuc khi biet x
	cout << "tinh gia tri da thuc khi biet x \n";
	double x;
	cout << "nhap x: "; cin >> x;
	cout << "P(" << x << ") = " << p.tinhGiaTri(x) << endl;
	cout << "Q(" << x << ") = " << q.tinhGiaTri(x) << endl;
	 
	// thuc hien cac phep tinh 2 da thuc
	cout << "thuc hien cac phep tinh 2 da thuc \n";
	cout << "P(x) + Q(x) = (" << p << ") + (" << q << ") = " << p + q << endl;
	cout << "P(x) - Q(x) = (" << p << ") - (" << q << ") = " << p - q << endl;
}

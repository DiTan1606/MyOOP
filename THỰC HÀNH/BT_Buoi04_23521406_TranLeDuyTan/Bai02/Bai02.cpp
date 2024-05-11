#include <iostream>
#include "cPhanSo.h"

int main()
{
	// thiet lap 2 phan so
	cPhanSo ps1, ps2;

	cout << "nhap 2 phan so (co the nhap so nguyen, so thuc)\n";
	cout << "nhap phan so thu 1: ";
	cin >> ps1;
	cout << "nhap phan so thu 2: ";
	cin >> ps2;

	// xuat 2 phan so (chi xuat ra phan so hoac so nguyen)
	cout << "phan so thu 1: " << ps1 << endl;
	cout << "phan so thu 2: " << ps2 << endl;

	// thuc hien cac phep toan + - * / 
	cout << "cac phep toan giua phan so voi phan so\n";
	cout << ps1 << " + " << ps2 << " = " << ps1 + ps2 << endl;
	cout << ps1 << " - " << ps2 << " = " << ps1 - ps2 << endl;
	cout << ps1 << " * " << ps2 << " = " << ps1 * ps2 << endl;
	cout << ps1 << " / " << ps2 << " = " << ps1 / ps2 << endl;

	cout << "phep cong giua ps voi so thuc, so nguyen\n";
	cout << ps1 << " + " << 1.5 << " = " << ps1 + 1.5 << endl;
	cout << 1.5 << " + " << ps1 << " = " << 1.5 + ps1 << endl;
	cout << ps2 << " + " << 3 << " = " << ps2 + 3 << endl;
	cout << 3 << " + " << ps2 << " = " << 3 + ps2 << endl;

	cout << "phep tru giua ps voi so thuc, so nguyen\n";
	cout << ps1 << " - " << 1.5 << " = " << ps1 - 1.5 << endl;
	cout << 1.5 << " - " << ps1 << " = " << 1.5 - ps1 << endl;
	cout << ps2 << " - " << 3 << " = " << ps2 - 3 << endl;
	cout << 3 << " - " << ps2 << " = " << 3 - ps2 << endl;

	cout << "phep nhan giua ps voi so thuc, so nguyen\n";
	cout << ps1 << " * " << 1.5 << " = " << ps1 * 1.5 << endl;
	cout << 1.5 << " * " << ps1 << " = " << 1.5 * ps1 << endl;
	cout << ps2 << " * " << 3 << " = " << ps2 * 3 << endl;
	cout << 3 << " * " << ps2 << " = " << 3 * ps2 << endl;

	cout << "phep chia giua ps voi so thuc, so nguyen\n";
	cout << ps1 << " / " << 1.5 << " = " << ps1 / 1.5 << endl;
	cout << 1.5 << " / " << ps1 << " = " << 1.5 / ps1 << endl;
	cout << ps2 << " / " << 3 << " = " << ps2 / 3 << endl;
	cout << 3 << " / " << ps2 << " = " << 3 / ps2 << endl;

	// thuc hien cac phep so sanh  giua phan so voi phan so
	cout << "phep so sanh giua phan so voi phan so\n";
	if (ps1 == ps2) {
		cout << ps1 << " bang " << ps2 << endl;
	}
	else if (ps1 != ps2) {
		cout << ps1 << " khac " << ps2 << endl;
	} 
	
	if (ps1 > ps2) {
		cout << ps1 << " lon hon " << ps2 << endl;
	}
	else if (ps1 < ps2) {
		cout << ps1 << " be hon " << ps2 << endl;
	}

	cout << "phep so sanh giua phan so voi so nguyen, so thuc\n";
	if (ps1 == 1.5) {
		cout << ps1 << " bang " << 1.5 << endl;
	}
	else if (ps1 != 1.5) {
		cout << ps1 << " khac " << 1.5 << endl;
	}

	if (ps1 > 1.5) {
		cout << ps1 << " lon hon " << 1.5 << endl;
	}
	else if (ps1 < 1.5) {
		cout << ps1 << " be hon " << 1.5 << endl;
	}

	if (ps2 == 3) {
		cout << ps2 << " bang " << 3 << endl;
	}
	else if (ps2 != 3) {
		cout << ps2 << " khac " << 3 << endl;
	}

	if (ps2 > 3) {
		cout << ps2 << " lon hon " << 3 << endl;
	}
	else if (ps2 < 3) {
		cout << ps2 << " be hon " << 3 << endl;
	}
}


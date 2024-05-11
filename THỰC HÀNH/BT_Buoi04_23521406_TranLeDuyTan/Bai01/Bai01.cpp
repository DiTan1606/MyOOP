#include <iostream>
#include "cSoPhuc.h"

int main()
{
	// thiet lap 2 so phuc
	cSoPhuc sp1, sp2;

	// nhap 2 so phuc
	cout << "nhap so phuc thu 1: "; cin >> sp1;
	cout << "nhap so phuc thu 2: "; cin >> sp2;

	// xuat 2 so phuc
	cout << "so phuc thu 1: " << sp1 << endl;
	cout << "so phuc thu 2: " << sp2 << endl;

	// thuc hien cac phep toan + - * / giua sp voi sp
	cout << sp1 << " + " << sp2 << " = " << sp1 + sp2 << endl;
	cout << sp1 << " - " << sp2 << " = " << sp1 - sp2 << endl;
	cout << sp1 << " * " << sp2 << " = " << sp1 * sp2 << endl;
	cout << sp1 << " / " << sp2 << " = " << sp1 / sp2 << endl;

	// thuc hien cac phep toan + - * / giua sp voi so thuc, so thuc voi sp
	cout << sp1 << " + " << 3 << " = " << sp1 + 3<< endl;
	cout << 3 << " + " << sp1 << " = " << 3 + sp1 << endl;

	cout << sp1 << " - " << 3 << " = " << sp1 - 3 << endl;
	cout << 3 << " - " << sp1 << " = " << 3 - sp1 << endl;

	cout << sp1 << " * " << 3 << " = " << sp1 * 3 << endl;
	cout << 3 << " * " << sp1 << " = " << 3 * sp1 << endl;

	cout << sp1 << " / " << 3 << " = " << sp1 / 3 << endl;
	cout << 3 << " / " << sp1 << " = " << 3 / sp1 << endl;

	cout << "thuc hien cac phep so sanh ==, !=:\n";
	// thuc hien cac phep so sanh == != giua sp voi sp
	if (sp1 == sp2) {
		cout << "2 so phuc " << sp1 << " va " << sp2 << " bang nhau\n";
	}
	if (sp1 != sp2) {
		cout << "2 so phuc " << sp1 << " va " << sp2 << " khac nhau\n";
	}

	// thuc hien cac phep toan so sanh == != giua sp voi so thuc, so thuc voi sp
	if (sp2 == 3) {
		cout << "so phuc " << sp2 << " va " << 3 << " bang nhau\n";
	}
	if (3 == sp2) {
		cout << "so phuc " << sp2 << " va " << 3 << " bang nhau\n";
	}
	if (sp2 != 3) {
		cout << "so phuc " << sp2 << " va " << 3 << " khac nhau\n";
	}
	if (3 != sp2) {
		cout << "so phuc " << sp2 << " va " << 3 << " khac nhau\n";
	}
}


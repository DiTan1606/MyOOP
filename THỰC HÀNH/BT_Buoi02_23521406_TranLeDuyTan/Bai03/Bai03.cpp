#include <iostream>
#include "cSoPhuc.h"
using namespace std;
int main()
{
	cSoPhuc sp1(1, 2), sp2;
	cout << "Thiet lap sp1: ";
	sp1.xuat(); cout << endl;
	cout << "Nhap sp2: " << endl;
	sp2.nhap();
	sp2.xuat(); cout << endl;
	cout << "Cong tru nhan chia 2 so phuc:" << endl;
	sp1.xuat(); cout << " + "; sp2.xuat(); cout << " = "; sp1.cong(sp2).xuat(); cout << endl;
	sp1.xuat(); cout << " - "; sp2.xuat(); cout << " = "; sp1.tru(sp2).xuat(); cout << endl;
	sp1.xuat(); cout << " x "; sp2.xuat(); cout << " = "; sp1.nhan(sp2).xuat(); cout << endl;
	sp1.xuat(); cout << " : "; sp2.xuat(); cout << " = "; sp1.chia(sp2).xuat(); cout << endl;
	cout << "Lay phan thuc cua sp1: " << sp1.getPhanthuc() << endl;
	cout << "Thay doi phan ao cua sp2 thanh 7: ";
	sp2.setPhanao(7);
	sp2.xuat(); cout << endl;
}


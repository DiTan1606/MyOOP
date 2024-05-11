#include "ListCandidate.h";

int main()
{
	int n;
	cout << "nhap so thi sinh trong danh sach: ";
	cin >> n;
	ListCandidate list;
	cout << "nhap danh sach -------------------------- " << endl;
	list.nhapDS(n);
	cout << "xuat danh sach -------------------------- " << endl;
	list.xuatDS();
	cout << "xuat danh sach thi sinh co tong diem lon hon 15 ------------- " << endl;
	list.xuatDSCoTongDiemLonHon(15);
	cout << "thi sinh co tong diem cao nhat la: " << list.thiSinhCoDiemCaoNhat() << endl;
	cout << "danh sach sau khi sap xep giam dan theo tong diem ------------- " << endl;
	list.sapXepGiamDanTheoTongDiem().xuatDS();
}

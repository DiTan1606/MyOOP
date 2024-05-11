#include "TKTK.h"
TKTK::TKTK() {}
TKTK::TKTK(double soDuBanDau, double laiSuat, cDate ngayGui, cDate ngayDaoHan) : soDuBanDau(soDuBanDau), laiSuat(laiSuat), ngayGui(ngayGui), ngayDaoHan(ngayDaoHan) {}

ostream& operator<<(ostream& os, const TKTK& tktk) {
	os << fixed << setprecision(2);
	TKTK temp = tktk;
	os << "so du ban dau : " << temp.soDuBanDau << endl;
	os << "lai suat: " << temp.laiSuat << endl;
	os << "ngay gui: " << temp.ngayGui << endl;
	os << "nhap ngay dao han: " << temp.ngayDaoHan << endl;
	os << "so tien lai nhan duoc: " << temp.tinhLai() << endl;
	os << "so du: " << temp.tinhSoDu() << endl;
	return os;
}
istream& operator>>(istream& is, TKTK& tktk) {
	cout << "nhap so du ban dau: "; is >> tktk.soDuBanDau;
	cout << "nhap lai suat: "; is >> tktk.laiSuat;
	is.ignore();
	cout << "nhap ngay gui: "; is >> tktk.ngayGui; 
	cout << "nhap ngay dao han: "; is >> tktk.ngayDaoHan; 
	return is;
}
double TKTK::tinhLai() { 
	int termYear = (ngayDaoHan - ngayGui) / 365;
	double tongLai = 0;
	double sodu = soDuBanDau;

	for (int i = 0; i < termYear; i++) {
		double laiMotNam = sodu * (laiSuat / 100);
		tongLai += laiMotNam;
		sodu += laiMotNam;
	}
	return tongLai;
}

double TKTK::tinhSoDu() {
	int termYear = (ngayDaoHan - ngayGui) / 365;
	double tongLai = 0;
	double sodu = soDuBanDau;

	for (int i = 0; i < termYear; i++) {
		double laiMotNam = sodu * (laiSuat / 100);
		tongLai += laiMotNam;
		sodu += laiMotNam;
	}
	return sodu;
}
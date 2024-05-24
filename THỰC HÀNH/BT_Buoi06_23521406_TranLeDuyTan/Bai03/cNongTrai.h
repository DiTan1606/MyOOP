#pragma once
#include <vector>
#include <mutex>
#include <condition_variable>
#include "cGiaSuc.h"
#include "cBo.h"
#include "cCuu.h"
#include "cDe.h"

class cNongTrai
{
private:
	vector <cGiaSuc*> nongTrai;
public:
	void nhap() {
		int slBo, slCuu, slDe;
		cout << "Nhap so luong cac loai gia suc trong nong trai:\n";
		cout << "Bo: "; cin >> slBo;
		cout << "Cuu: "; cin >> slCuu;
		cout << "De: "; cin >> slDe;
		nongTrai.push_back(new cBo(slBo));
		nongTrai.push_back(new cCuu(slCuu));
		nongTrai.push_back(new cDe(slDe));
	}
	void xuat() {
		cout << setfill('-') << setw(80) << '-' << endl;
		cout << setfill(' ');
		cout << setw(10) << "Loai" << setw(10) << "SL" << setw(15) << "luong sua" << setw(15) << "Tieng keu" << endl;
		cout << setfill('-') << setw(80) << '-' << endl;
		cout << setfill(' ');
		for (cGiaSuc* gs : nongTrai) {
			gs->xuat();
		}
		cout << setfill('-') << setw(80) << '-' << endl;
	}

	int tongSL() {
		int tongsl = 0;
		for (cGiaSuc* gs : nongTrai) {
			tongsl += gs->getSL();
		}
		return tongsl;
	}
	double tongLuongSua() {
		double tongls = 0;
		for (cGiaSuc* gs : nongTrai) {
			tongls += gs->getLuongSua();
		}
		return tongls;
	}
	cGiaSuc* getGiaSuc(int index) {
		return nongTrai[index - 1];
	}
};


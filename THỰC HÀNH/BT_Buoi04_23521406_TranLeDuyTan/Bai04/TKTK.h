#pragma once
#include "cDate.h"
#include <iomanip>

class TKTK
{
private:
	double soDuBanDau;
	double laiSuat;
	cDate ngayGui;
	cDate ngayDaoHan;
public:
	TKTK();
	TKTK(double, double, cDate, cDate);
	friend ostream& operator<<(ostream& os, const TKTK&);
	friend istream& operator>>(istream& is, TKTK&);
	double tinhLai();
	double tinhSoDu();
};


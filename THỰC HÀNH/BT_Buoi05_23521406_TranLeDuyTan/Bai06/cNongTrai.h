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
	void nhap();
	void xuat();

	int tongSL();
	double tongLuongSua();
	cGiaSuc* getGiaSuc(int);
};


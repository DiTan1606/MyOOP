#pragma once
#include "cGiaSuc.h"
#include "cBo.h"
#include "cCuu.h"
#include "cDe.h"

class cNongTrai
{
private:
	cBo bo;
	cCuu cuu;
	cDe de;
public:
	void nhapSL();
	void xuat();
	void tiengKeu();
	int socon();
	int luongSua();
};


#pragma once
#include "cNhanVienSX.h"
#include "cNhanVienVP.h"
#include <iomanip>

struct SX {
	cNhanVienSX nvsx;
	SX* next;
};

struct VP {
	cNhanVienVP nvvp;
	VP* next;
};

class cDanhSachNV
{
private:
	SX* dsnvSX;
	VP* dsnvVP;
public:
	cDanhSachNV();

	int sizeDSNVSX();
	int sizeDSNVVP();

	SX* makeDSNVSX();
	VP* makeDSNVVP();

	void appendDSNVSX();
	void appendDSNVVP();

	void xuatDSNVSX();
	void xuatDSNVVP();
};


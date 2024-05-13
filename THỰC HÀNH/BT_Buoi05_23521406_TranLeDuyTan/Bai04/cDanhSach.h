#pragma once
#include "cCaSi.h"
#include "cCongNhan.h"
#include "cHocSinh.h"
#include "cNgheSi.h"
#include "cSinhVien.h"

struct DS {
	cConNguoi* infor;
	DS* next;
};

class cDanhSach
{
private:
	DS* ds;
public:
	cDanhSach();
	
	DS* makeDS(string className);
	void append(string className);
	void xuat();
	void xoa(int i);
};


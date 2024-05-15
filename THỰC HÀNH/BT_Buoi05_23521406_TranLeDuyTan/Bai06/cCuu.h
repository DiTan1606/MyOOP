#pragma once
#include "cGiaSuc.h"
class cCuu :
    public cGiaSuc
{
public:
	cCuu(int sl);
	virtual void Keu() override;
	virtual void choSua() override;
	virtual void sinhCon() override;
};


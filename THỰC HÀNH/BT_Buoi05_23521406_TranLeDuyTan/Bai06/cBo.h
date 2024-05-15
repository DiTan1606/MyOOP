#pragma once
#include "cGiaSuc.h"
class cBo :
    public cGiaSuc
{
public:
	cBo(int sl);
	virtual void Keu() override;
	virtual void choSua() override;
	virtual void sinhCon() override;
};


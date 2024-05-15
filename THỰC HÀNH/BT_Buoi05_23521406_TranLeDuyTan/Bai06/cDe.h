#pragma once
#include "cGiaSuc.h"
class cDe :
    public cGiaSuc
{
public:
	cDe(int sl);
	virtual void Keu() override;
	virtual void choSua() override;
	virtual void sinhCon() override;
};


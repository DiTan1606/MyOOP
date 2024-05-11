#include <iostream>
#include "cGiaSuc.h"
#include "cBo.h"

int main()
{
	cBo bo;
	bo.nhapSL();
	cout << bo.choSua();
	cout << bo.sinhCon();
	cout << bo.phatRaTiengKeu();
}

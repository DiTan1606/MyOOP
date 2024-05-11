#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;
class cGiaSuc
{
protected:
	vector <cGiaSuc> ds;
public:
	void nhapSL();
	int sinhCon();
	int choSua();
	string phatRaTiengKeu();
};


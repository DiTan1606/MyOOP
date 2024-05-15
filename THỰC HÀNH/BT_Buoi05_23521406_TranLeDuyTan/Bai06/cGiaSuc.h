#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <iomanip>
#include <sstream>
#include <ctime>
#include <thread>
#include <chrono>
#include <time.h>
#include <mutex>
#include <cstdlib>
using namespace std;

class cGiaSuc
{
protected:
	string loai;
	int sl;
	double luongSua;
	string tiengKeu;

	int timeDoi;
	int timeDe;
	int timeChoSua;

	time_t lanAnCuoi;
	time_t lanChoSuaCuoi;
	time_t lanDeCuoi;
public:
	cGiaSuc(string, int, int, int, int);
	virtual void Keu() = 0;
	virtual void choSua() = 0;
	virtual void sinhCon() = 0;
	virtual void xuat() const;
	int getSL();
	double getLuongSua();
};


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
	cGiaSuc(string loai, int sl, int t_doi, int t_de, int t_chosua) : loai(loai), sl(sl), timeDoi(t_doi), timeDe(t_de), timeChoSua(t_chosua) {
		lanAnCuoi = time(0);
		lanChoSuaCuoi = time(0);
		lanDeCuoi = time(0);
		luongSua = 0;
	}
	virtual void Keu() = 0;
	virtual void choSua() = 0;
	virtual void sinhCon() = 0;
	virtual void xuat() const {
		stringstream stream;
		stream << fixed << setprecision(1) << luongSua;
		string sua = stream.str() + " lit";

		cout << setw(10) << loai << setw(10) << sl << setw(15) << sua << setw(15) << tiengKeu << endl;
	}
	int getSL() {
		return sl;
	}
	double getLuongSua() {
		return luongSua;
	}
};


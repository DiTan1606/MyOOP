#pragma once
#include "Candidate.h"
class ListCandidate
{
private:
	int size;
	Candidate* arr;
public:
	ListCandidate();
	ListCandidate(int);
	void nhapDS(int);
	void xuatDS();
	void xuatDSCoTongDiemLonHon(float);
	string thiSinhCoDiemCaoNhat();
	ListCandidate sapXepGiamDanTheoTongDiem();
};


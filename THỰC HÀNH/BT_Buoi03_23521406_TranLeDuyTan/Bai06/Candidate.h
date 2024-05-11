#pragma once
#include <iostream>
#include <string>
using namespace std;

class Candidate
{
private:
	string ma;
	string name;
	string ngaySinh;
	float diemToan;
	float diemVan;
	float diemAnh;
public:
	Candidate();
	Candidate(string, string, string, float, float, float);
	float tongDiem() const;
	void nhap();
	void xuat();
	string getName();
};


#pragma once
#include <iostream>
#include <string>
#include <string>
using namespace std;
class cString
{
private:
	string str;
public:
	cString();
	cString(string);
	void nhap();
	void xuat();
	int length();
	cString noiChuoi(cString);
	cString daoChuoi();
	cString vietHoa();
	cString vietThuong();
};


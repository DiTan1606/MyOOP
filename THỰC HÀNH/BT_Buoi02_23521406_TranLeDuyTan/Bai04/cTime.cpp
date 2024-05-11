#include "cTime.h"
bool cTime::isTime() {
	return (sec >= 0 && sec < 60 && min >= 0 && min < 60 && hour >= 0 && hour < 24);
}
cTime::cTime() {}
cTime::cTime(int hour, int min, int sec) {
	this->hour = hour;
	this->min = min;
	this->sec = sec;
	if (!isTime()) {
		cout << "Time khong hop le";
		exit(-1);
	}
}
void cTime::nhap() {
	cout << "nhap gio: "; cin >> hour;
	cout << "nhap phut: "; cin >> min;
	cout << "nhap giay: "; cin >> sec;
	if (!isTime()) {
		cout << "Time khong hop le";
		exit(-1);
	}
}
void cTime::xuat() {
	cout << hour << ":" << min << ":" << sec;
}
cTime cTime::tangTime(int h, int m, int s) {
	cTime t(hour, min, sec);
	t.sec += s;
	t.min += m + t.sec / 60;
	t.hour += h + t.min / 60;
	t.sec %= 60;
	t.min %= 60;
	t.hour %= 24;
	return t;
}
cTime cTime::giamTime(int h, int m, int s) {
	cTime t(hour, min, sec);
	t.sec -= s;
	if (t.sec < 0) {
		t.sec += 60;
		m++; 
	}
	t.min -= m;
	if (t.min < 0) {
		t.min += 60;
		h++;
	}
	t.hour -= h;
	if (t.hour < 0) {
		t.hour += 24;
	}
	return t;
}
//get/set
int cTime::getHour() {
	return hour;
}
int cTime::getMin() {
	return min;
}
int cTime::getSec() {
	return sec;
}
void cTime::setHour(int h) {
	this->hour = h;
}
void cTime::setMin(int m) {
	this->min = m;
}
void cTime::setSec(int s) {
	this->sec = s;
}
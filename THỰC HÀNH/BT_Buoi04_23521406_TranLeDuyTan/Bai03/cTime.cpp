#include "cTime.h"

bool cTime::isTime() {
	return (sec >= 0 && sec < 60 && min >= 0 && min < 60 && hour >= 0 && hour < 24);
}

cTime::cTime() {}

cTime::cTime(int gio, int phut, int giay) : hour(gio) , min(phut) , sec(giay) {}

ostream& operator<<(ostream& os, const cTime& t) {
	cTime temp = t;
	temp.rutgonTime();

	if (!(temp.isTime())) {
		os << "Time khong hop le";
		exit(-1);
	}

	os << temp.hour << ":" << temp.min << ":" << temp.sec;
	return os;
}
istream& operator>>(istream& is, cTime& t) {
	string time;
	getline(cin, time);
	time.erase(remove_if(time.begin(), time.end(), [](char ch) {return ch == ' '; }), time.end());

	size_t posHC1 = time.find(':');
	size_t posHC2 = time.find(':', posHC1 + 1);

	if (posHC1 != string::npos && posHC2 != string::npos) {
		string strH = time.substr(0, posHC1);
		string strM = time.substr(posHC1 + 1, posHC2 - posHC1 - 1);
		string strS = time.substr(posHC2 + 1);

		t.hour = stoi(strH);
		t.min = stoi(strM);
		t.sec = stoi(strS);

		return is;
	}
	else {
		cout << "Time khong hop le";
		exit(-1);
	}
}
void cTime::rutgonTime() {
	if (sec >= 60) {
		min += sec / 60;
		sec %= 60;
	}
	else if (sec < 0) {
		int borrow = (-sec + 59) / 60;
		min -= borrow;
		sec += borrow * 60;
	}

	if (min >= 60) {
		hour += min / 60;
		min %= 60;
	}
	else if (min < 0) {
		int borrow = (-min + 59) / 60;
		hour -= borrow;
		min += borrow * 60;
	}

	hour %= 24;
}
cTime operator+(const cTime& time, int seconds) {
	cTime result = time;
	result.sec += seconds;
	result.rutgonTime();
	return result;
}

cTime operator-(const cTime& time, int seconds) {
	cTime result = time;
	result.sec -= seconds;
	result.rutgonTime();
	return result;
}
cTime& cTime::operator++() {
	++sec;
	rutgonTime();
	return *this;
}
cTime cTime::operator++(int) {
	cTime temp = *this;
	++(*this);
	return temp;
}
cTime& cTime::operator--() {
	--sec;
	rutgonTime();
	return *this;
}
cTime cTime::operator--(int) {
	cTime temp = *this;
	--(*this);
	return temp;
}

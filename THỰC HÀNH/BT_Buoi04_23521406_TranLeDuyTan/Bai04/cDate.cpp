#include "cDate.h"
cDate::cDate() {}
cDate::cDate(int day, int month, int year) : day(day), month(month), year(year) {}
ostream& operator<<(ostream& os, const cDate& d) {
    cDate temp = d;
    temp.rutgon();

    if (!(temp.isDate())) {
        os << "Date khong hop le";
        exit(-1);
    }
    os << temp.day << "/" << temp.month << "/" << temp.year;
    return os;
}
istream& operator>>(istream& is, cDate& d) {
    string date;
    getline(is, date);
    date.erase(remove_if(date.begin(), date.end(), [](char ch) {return ch == ' '; }), date.end());

    size_t posHG1 = date.find('/');
    size_t posHG2 = date.find('/', posHG1 + 1);

    if (posHG1 != string::npos && posHG2 != string::npos) {
        string strD = date.substr(0, posHG1);
        string strM = date.substr(posHG1 + 1, posHG2 - posHG1 - 1);
        string strY = date.substr(posHG2 + 1);

        d.day = stoi(strD);
        d.month = stoi(strM);
        d.year = stoi(strY);

        return is;
    }
    else {
        cout << "Date khong hop le";
        exit(-1);
    }
}
bool cDate::isDate() {
    return (day >= 1 && month >= 1 && month <= 12 && year >= 1 && day <= daysInMonth());
}
bool cDate::isLeapYear() {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int cDate::daysInMonth() {
    if (month == 2) {
        return isLeapYear() ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    else {
        return 31;
    }
}
void cDate::rutgon() {
    while (day > daysInMonth()) {
        day -= daysInMonth();
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }

    while (day <= 0) {
        month--;
        if (month < 1) {
            month = 12;
            year--;
        }
        day += daysInMonth();
    }
}

cDate operator+(const cDate& date, int day) {
    cDate result = date;
    result.day += day;
    result.rutgon();
    return result;
}
cDate operator-(const cDate& date, int day) {
    cDate result = date;
    result.day -= day;
    result.rutgon();
    return result;
}

cDate& cDate::operator++() {
    ++day;
    rutgon();
    return *this;
}
cDate cDate::operator++(int) {
    cDate temp = *this;
    ++(*this);
    return temp;
}

cDate& cDate::operator--() {
    --day;
    rutgon();
    return *this;
}
cDate cDate::operator--(int) {
    cDate temp = *this;
    --(*this);
    return temp;
}

int operator- (const cDate& date1, const cDate& date2) {
    int days1 = date1.year * 365 + date1.month * 30 + date1.day + date1.year / 4 - date1.year / 100 + date1.year / 400;
    int days2 = date2.year * 365 + date2.month * 30 + date2.day + date2.year / 4 - date2.year / 100 + date2.year / 400;
    return days1 - days2;
}


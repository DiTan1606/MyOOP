#include "cDate.h"
bool cDate::isDate() {
    return (day >= 1 && month >= 1 && month <= 12 && year >= 1 && day <= daysInMonth());
}
cDate::cDate() {}
cDate::cDate(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
    if (!isDate()) {
        cout << "ngay khong hop le";
        exit(-1);
    }
}
void cDate::nhap() {
    cout << "nhap ngay: ";
    cin >> day;
    cout << "nhap thang: ";
    cin >> month;
    cout << "nhap nam: ";
    cin >> year;
    if (!isDate()) {
        cout << "ngay khong hop le";
        exit(-1);
    }
}
void cDate::xuat() {
    if (isDate()) {
        cout << day << "/" << month << "/" << year;
    } 
    else {
        cout << "ngay khong hop le";
        exit(-1);
    }
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

void cDate::tangDay(int d) {
    day += d;
    while (day > daysInMonth()) {
        day -= daysInMonth();
        tangMonth(1);
    }
}

void cDate::tangMonth(int m) {
    month += m;
    while (month > 12) {
        month -= 12;
        tangYear(1);
    }
}

void cDate::tangYear(int y) {
    year += y;
}

cDate cDate::tangDate(int d, int m, int y) {
    cDate t(day, month, year);
    t.tangDay(d);
    t.tangMonth(m);
    t.tangYear(y);
    return t;
}

void cDate::giamDay(int d) {
    day -= d;
    while (day <= 0) {
        giamMonth(1);
        day += daysInMonth();
    }
}

void cDate::giamMonth(int m) {
    month -= m;
    while (month <= 0) {
        month += 12;
        giamYear(1);
    }
}

void cDate::giamYear(int y) {
    year -= y;
}

cDate cDate::giamDate(int d, int m, int y) {
    cDate t(day, month, year);
    t.giamDay(d);
    t.giamMonth(m);
    t.giamYear(y);
    return t;
}

void cDate::layThuTrongTuan() {
    tm timeinfo = {};
    tm date = {};
    timeinfo.tm_mday = day;
    timeinfo.tm_mon = month - 1; 
    timeinfo.tm_year = year - 1900;

    time_t time = mktime(&timeinfo);
    localtime_s(&date, &time);
    string dayinweek;
    switch (date.tm_wday)
    {
    case 0:
        dayinweek = "Chu Nhat";
        break;
    case 1:
        dayinweek = "Thu 2";
        break;
    case 2:
        dayinweek = "Thu 3";
        break;
    case 3:
        dayinweek = "Thu 4";
        break;
    case 4:
        dayinweek = "Thu 5";
        break;
    case 5:
        dayinweek = "Thu 6";
        break;
    case 6:
        dayinweek = "Thu 7";
        break;
    default:
        dayinweek = "khong xac dinh";
        break;
    }
    xuat();
    cout << " la " << dayinweek << endl;
}

int cDate::getDay() {
    return day;
}
int cDate::getMonth() {
    return month;
}
int cDate::getYear() {
    return year;
}
void cDate::setDay(int d) {
    day = d;
}
void cDate::setMonth(int m) {
    month = m;
}
void cDate::setYear(int y) {
    year = y;
}
#include "cDate.h"
cDate::cDate() {}
cDate::cDate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}
void cDate::nhap() {
    do {
        cout << "nhap ngay: ";
        cin >> day;
        cout << "nhap thang: ";
        cin >> month;
        cout << "nhap nam: ";
        cin >> year;
    } while (day < 1 || month < 1 || month > 12 || year < 1 || day > daysInMonth());
}
void cDate::xuat() {
    cout << day << "/" << month << "/" << year;
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
cDate cDate::nextDate() {
    int daysInCurrentMonth = daysInMonth();

    if (day < daysInCurrentMonth) {
        day++;
    }
    else {
        day = 1;
        if (month < 12) {
            month++;
        }
        else {
            month = 1;
            year++;
        }
    }

    cDate d(day, month, year);
    return d;
}
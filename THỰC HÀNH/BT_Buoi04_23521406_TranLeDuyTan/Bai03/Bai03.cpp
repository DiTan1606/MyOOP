#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include "cTime.h"

int main()
{
	// thiet lap thoi gian t1
	cTime t1;
	cout << "nhap thoi gian t1: ";
	cin >> t1;
	cout << "xuat thoi gian t1: ";
	cout << t1 << endl;

	// thuc hien cac phep + - 
	cout << "cong thoi gian t1 cho s giay\n";
	int s;
	cout << "nhap s: "; cin >> s;
	cout << t1 << " + " << s << " = " << t1 + s << endl;
	cout << t1 << " - " << s << " = " << t1 - s << endl;

	// thuc hien cac phep ++, --
	++t1;
	cout << "t1 cong them 1s: " << t1 << endl;
	--t1;
	cout << "t1 tru di 1s: " << t1 << endl;
	cout << "\n";

	while (true) {
		cout << "\033[F";

		cout << setw(80) << t1 << endl;

		this_thread::sleep_for(chrono::seconds(1));

		++t1;
	}

	return 0;
}
#pragma once
#include "cGiaSuc.h"
class cCuu :
	public cGiaSuc
{
public:
	cCuu(int sl) : cGiaSuc("Cuu", sl, 25, 35, 20) {}
	void Keu() {
		tiengKeu = " ";
		while (1) {
			if (time(0) - lanAnCuoi >= timeDoi) {
				lanAnCuoi = time(0);
				tiengKeu = "Mee meee!";
			}
			std::this_thread::sleep_for(std::chrono::seconds(timeDoi));
			tiengKeu = " ";
		}
	}
	void choSua() {
		srand(time(0));
		luongSua = 0;

		while (1) {
			if (time(0) - lanChoSuaCuoi >= timeChoSua) {
				lanChoSuaCuoi = time(0);
				for (int i = 1; i <= sl; i++) {
					luongSua += rand() % 6;
				}
			}
			std::this_thread::sleep_for(std::chrono::seconds(timeChoSua));
		}
	}
	void sinhCon() {
		srand(time(0));

		while (1) {
			if (time(0) - lanDeCuoi >= timeDe) {
				lanDeCuoi = time(0);
				int temp = sl;
				for (int i = 1; i <= temp; i++) {
					sl += rand() % 2 + 1;
				}
			}
			std::this_thread::sleep_for(std::chrono::seconds(timeDe));
		}
	}
};


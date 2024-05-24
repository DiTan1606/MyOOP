#pragma once
#include "cGiaSuc.h"
class cDe :
	public cGiaSuc
{
public:
	cDe(int sl) : cGiaSuc("De", sl, 20, 40, 15) {}
	void Keu() {
		tiengKeu = " ";
		while (1) {
			if (time(0) - lanAnCuoi >= timeDoi) {
				lanAnCuoi = time(0);
				tiengKeu = "Bee beee!";
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
					luongSua += rand() % 11;
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


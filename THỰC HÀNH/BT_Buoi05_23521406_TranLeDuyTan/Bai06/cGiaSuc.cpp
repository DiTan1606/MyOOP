#include "cGiaSuc.h"

cGiaSuc::cGiaSuc(string loai, int sl, int t_doi, int t_de, int t_chosua) : loai(loai), sl(sl) , timeDoi(t_doi),  timeDe(t_de), timeChoSua(t_chosua) {
	lanAnCuoi = time(0);
	lanChoSuaCuoi = time(0);
	lanDeCuoi = time(0);
	luongSua = 0;
}
void cGiaSuc::xuat() const {
	stringstream stream;
	stream << fixed << setprecision(1) << luongSua;
	string sua = stream.str() + " lit";

	cout << setw(10) << loai << setw(10) << sl  << setw(15) << sua << setw(15) << tiengKeu << endl;
}
int cGiaSuc::getSL() {
	return sl;
}
double cGiaSuc::getLuongSua() {
	return luongSua;
}


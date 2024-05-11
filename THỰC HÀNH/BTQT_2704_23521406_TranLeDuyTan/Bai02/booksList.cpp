// MSSV: 23521406
// Ho va ten: Tran Le Duy Tan
// Ngay sinh: 16/6/2005
// lop: IT002.O221

#include "booksList.h"

booksList::booksList() {}

void booksList::nhapDSSachGK() {
	cout << "nhap so loai sach GK: ";
	cin >> slSachGK;
	DSSachGK = new sachGK[slSachGK];
	for (int i = 0; i < slSachGK; i++) {
		cout << "nhap thong tin sach GK thu " << i + 1 << endl;
		DSSachGK[i].nhap();
	}
}
void booksList::nhapDSSachTK() {
	cout << "nhap so loai sach TK: ";
	cin >> slSachTK;
	DSSachTK = new sachTK[slSachTK];
	for (int i = 0; i < slSachTK; i++) {
		cout << "nhap thong tin sach TK thu " << i + 1 << endl;
		DSSachTK[i].nhap();
	}
}
void booksList::nhap() {
	nhapDSSachGK();
	nhapDSSachTK();
}

void booksList::xuatDSSachGK() {
	string maSach[100];
	string tenSach[100];
	string NXB[100];
	int sl[100];
	double donGia[100];
	bool tinhTrang[100];
	double thanhtien[100];

	for (int i = 0; i < slSachGK; i++) {
		maSach[i] = DSSachGK[i].getMaSach();
		tenSach[i] = DSSachGK[i].getTenSach();
		NXB[i] = DSSachGK[i].getNXB();
		sl[i] = DSSachGK[i].getSL();
		donGia[i] = DSSachGK[i].getDonGia();
		tinhTrang[i] = DSSachGK[i].getTinhTrang();
		thanhtien[i] = DSSachGK[i].thanhTien();
	}
	cout << setfill('-') << setw(110) << "-" << endl;
	cout << setfill(' ');
	cout << setw(10) << "Ma sach" << setw(20) << "Ten sach" << setw(20) << "NXB" << setw(10) << "So luong" << setw(10) << "Don gia" << setw(20) << "Tinh trang" << setw(20) << "Thanh tien" << endl;
	cout << setfill('-') << setw(110) << "-" << endl;
	cout << setfill(' ');

	for (int i = 0; i < slSachGK; i++) {
		string tt = (tinhTrang[i] == 0) ? "cu" : "moi";
		cout << setw(10) << maSach[i] << setw(20) << tenSach[i] << setw(20) << NXB[i] << setw(10) << sl[i] << setw(10) << donGia[i] << setw(20) << tt << setw(20) << thanhtien[i] << endl;
	}
	cout << setfill('-') << setw(110) << "-" << endl;
}
void booksList::xuatDSSachTK() {
	string maSach[100];
	string tenSach[100];
	string NXB[100];
	int sl[100];
	double donGia[100];
	double tienThue[100];
	double thanhtien[100];

	for (int i = 0; i < slSachTK; i++) {
		maSach[i] = DSSachTK[i].getMaSach();
		tenSach[i] = DSSachTK[i].getTenSach();
		NXB[i] = DSSachTK[i].getNXB();
		sl[i] = DSSachTK[i].getSL();
		donGia[i] = DSSachTK[i].getDonGia();
		tienThue[i] = DSSachTK[i].getTienThue();
		thanhtien[i] = DSSachTK[i].thanhTien();
	}
	cout << setfill('-') << setw(110) << "-" << endl;
	cout << setfill(' ');
	cout << setw(10) << "Ma sach" << setw(20) << "Ten sach" << setw(20) << "NXB" << setw(10) << "So luong" << setw(10) << "Don gia" << setw(20) << "Tien thue" << setw(20) << "Thanh tien" << endl;
	cout << setfill('-') << setw(110) << "-" << endl;
	cout << setfill(' ');

	for (int i = 0; i < slSachTK; i++) {
		cout << setw(10) << maSach[i] << setw(20) << tenSach[i] << setw(20) << NXB[i] << setw(10) << sl[i] << setw(10) << donGia[i] << setw(20) << tienThue[i] << setw(20) << thanhtien[i] << endl;
	}
	cout << setfill('-') << setw(110) << "-" << endl;
}
void booksList::xuat() {
	cout << "Danh sach sach Giao khoa: " << endl;
	xuatDSSachGK();
	cout << "Danh sach sach Tham khao: " << endl;
	xuatDSSachTK();
}

booksList booksList::coThanhTienItNhat() {
	double thanhTienMin = DSSachGK[0].thanhTien();

	for (int i = 1; i < slSachGK; i++) {
		if (DSSachGK[i].thanhTien() < thanhTienMin) {
			thanhTienMin = DSSachGK[i].thanhTien();
		}
	}
	for (int i = 1; i < slSachTK; i++) {
		if (DSSachTK[i].thanhTien() < thanhTienMin) {
			thanhTienMin = DSSachTK[i].thanhTien();
		}
	}

	int demSGK = 0;
	int demSTK = 0;
	for (int i = 0; i < slSachGK; i++) {
		if (DSSachGK[i].thanhTien() == thanhTienMin) {
			demSGK++;
		}
	}
	for (int i = 0; i < slSachTK; i++) {
		if (DSSachTK[i].thanhTien() == thanhTienMin) {
			demSTK++;
		}
	}

	booksList bl;
	bl.slSachGK = demSGK;
	bl.slSachTK = demSTK;
	bl.DSSachGK = new sachGK[bl.slSachGK];
	bl.DSSachTK = new sachTK[bl.slSachTK];

	int i = 0;
	for (int k = 0; k < slSachGK; k++) {
		if (DSSachGK[k].thanhTien() == thanhTienMin) {
			bl.DSSachGK[i] = DSSachGK[k];
			i++;
		}
	}

	int j = 0;
	for (int k = 0; k < slSachTK; k++) {
		if (DSSachTK[k].thanhTien() == thanhTienMin) {
			bl.DSSachTK[j] = DSSachTK[k];
			j++;
		}
	}

	return bl;
}


booksList booksList::timSGKQuaTenNXB(string nxb) {
	int dem = 0;
	for (int i = 0; i < slSachGK; i++) {
		if (DSSachGK[i].getNXB() == nxb) {
			dem++;
		}
	}
	booksList bl;
	bl.slSachGK = dem;
	bl.DSSachGK = new sachGK[bl.slSachGK];
	int i = 0; 
	for (int j = 0; j < slSachGK; j++) {
		if (DSSachGK[j].getNXB() == nxb) {
			bl.DSSachGK[i] = DSSachGK[j];
			i++;
		}
	}
	return bl;
}

booksList::~booksList() {
	delete[] DSSachGK;
	delete[] DSSachTK;
}
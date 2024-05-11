// MSSV: 23521406
// Ho va ten: Tran Le Duy Tan
// Ngay sinh: 16/6/2005
// lop: IT002.O221

#include "danhSachSV.h"

danhSachSV::danhSachSV() {}

void danhSachSV::nhapDSSVCaoDang() {
	cout << "nhap so luong sinh vien cao dang: "; cin >> slSVCaoDang;
	DSSVCaoDang = new SVCaoDang[slSVCaoDang];
	cout << "nhap danh sach sinh vien cao dang: " << endl;
	for (int i = 0; i < slSVCaoDang; i++) {
		cout << "nhap sinh vien cao dang thu " << i + 1 << endl;
		DSSVCaoDang[i].nhap();
	}
}
void danhSachSV::nhapDSSVDaiHoc() {
	cout << "nhap so luong sinh vien dai hoc: "; cin >> slSVDaiHoc;
	DSSVDaiHoc = new SVDaiHoc[slSVDaiHoc];
	cout << "nhap danh sach sinh vien dai hoc: " << endl;
	for (int j = 0; j < slSVDaiHoc; j++) {
		cout << "nhap sinh vien dai hoc thu " << j + 1 << endl;
		DSSVDaiHoc[j].nhap();
	}
}

void danhSachSV::nhap() {
	nhapDSSVCaoDang();
	nhapDSSVDaiHoc();
}
void danhSachSV::xuatDSSVCaoDang() {
	string mssv[100];
	string hoTen[100];
	string diaChi[100];
	int tongsotinchi[100];
	float dtb[100];
	float dtn[100];
	for (int i = 0; i < slSVCaoDang; i++) {
		mssv[i] = DSSVCaoDang[i].getMSSV();
		hoTen[i] = DSSVCaoDang[i].getHoTen();
		diaChi[i] = DSSVCaoDang[i].getDiaChi();
		tongsotinchi[i] = DSSVCaoDang[i].getTongSoTinChi();
		dtb[i] = DSSVCaoDang[i].getDTB();
		dtn[i] = DSSVCaoDang[i].getDTN();
	}
	cout << setfill('-') << setw(90) << "-" << endl;
	cout << setfill(' ');
	cout << setw(10) << "MSSV" << setw(20) << "Ho va ten" << setw(20) << "Dia chi" << setw(20) << "Tong so TC" << setw(10) << "DTB" << setw(10) << "Diem TN" << endl;
	cout << setfill('-') << setw(90) << "-" << endl;
	cout << setfill(' ');

	for (int i = 0; i < slSVCaoDang; i++) {
		cout << setw(10) << mssv[i] << setw(20) << hoTen[i] << setw(20) << diaChi[i] << setw(20) << tongsotinchi[i] << setw(10) << dtb[i] << setw(10) << dtn[i] << endl;
	}
	cout << setfill('-') << setw(90) << "-" << endl;
}

void danhSachSV::xuatDSSVDaiHoc() {
	string mssv[100];
	string hoTen[100];
	string diaChi[100];
	int tongsotinchi[100];
	float dtb[100];
	string tenLV[100];
	float dlv[100];
	for (int i = 0; i < slSVDaiHoc; i++) {
		mssv[i] = DSSVDaiHoc[i].getMSSV();
		hoTen[i] = DSSVDaiHoc[i].getHoTen();
		diaChi[i] = DSSVDaiHoc[i].getDiaChi();
		tongsotinchi[i] = DSSVDaiHoc[i].getTongSoTinChi();
		dtb[i] = DSSVDaiHoc[i].getDTB();
		tenLV[i] = DSSVDaiHoc[i].getTenLuanVan();
		dlv[i] = DSSVDaiHoc[i].getDLV();
	}
	cout << setfill('-') << setw(120) << "-" << endl;
	cout << setfill(' ');
	cout << setw(10) << "MSSV" << setw(20) << "Ho va ten" << setw(20) << "Dia chi" << setw(20) << "Tong so TC" << setw(10) << "DTB" << setw(20) << "Ten Luan Van" << setw(20) << "Diem Luan Van" << endl;
	cout << setfill('-') << setw(120) << "-" << endl;
	cout << setfill(' ');

	for (int i = 0; i < slSVDaiHoc; i++) {
		cout << setw(10) << mssv[i] << setw(20) << hoTen[i] << setw(20) << diaChi[i] << setw(20) << tongsotinchi[i] << setw(10) << dtb[i] << setw(20) << tenLV[i] << setw(20) << dlv[i] << endl;
	}
	cout << setfill('-') << setw(120) << "-" << endl;
}

void danhSachSV::xuat() {
	cout << "DANH SACH SINH VIEN CAO DANG: " << endl;
	xuatDSSVCaoDang();
	cout << "DANH SACH SINH VIEN DAI HOC: " << endl;
	xuatDSSVDaiHoc();
}

int danhSachSV::demSLSVDuDKTN() {
	int dem = 0;
	for (int i = 0; i < slSVCaoDang; i++) {
		if (DSSVCaoDang[i].XetTotNghiep()) {
			dem++;
		}
	}
	for (int j = 0; j < slSVDaiHoc; j++) {
		if (DSSVDaiHoc[j].XetTotNghiep()) {
			dem++;
		}
	}
	return dem;
}
danhSachSV danhSachSV::DSSVDaiHocCoDTBCaoNhat() {
	danhSachSV dssv;

	float DTBMax = DSSVDaiHoc[0].getDTB();
	for (int i = 1; i < slSVDaiHoc; i++) {
		if (DSSVDaiHoc[i].getDTB() > DTBMax) {
			DTBMax = DSSVDaiHoc[i].getDTB();
		}
	}

	int dem = 0;
	for (int i = 0; i < slSVDaiHoc; i++) {
		if (DSSVDaiHoc[i].getDTB() == DTBMax) {
			dem++;
		}
	}

	dssv.slSVDaiHoc = dem;
	dssv.DSSVDaiHoc = new SVDaiHoc[dssv.slSVDaiHoc];

	int i = 0;
	for (int j = 0; j < slSVDaiHoc; j++) {
		if (DSSVDaiHoc[j].getDTB() == DTBMax) {
			dssv.DSSVDaiHoc[i] = DSSVDaiHoc[j];
			i++;
		}
	}

	return dssv;
}
danhSachSV::~danhSachSV() {
	delete[] DSSVCaoDang;
	delete[] DSSVDaiHoc;
}
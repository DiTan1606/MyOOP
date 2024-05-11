#include "cDanhSachSV.h"
cDanhSachSV::cDanhSachSV() {}

void cDanhSachSV::nhapDSSVCD() {
	int slsvCD;
	cout << "nhap so luong sinh vien cao dang: "; cin >> slsvCD;
	dssvCD.resize(slsvCD);
	for (int i = 0; i < slsvCD; i++) {
		cout << "nhap sinh vien cao dang thu " << i + 1 << endl;
		dssvCD[i].nhap();
	}
}
void cDanhSachSV::nhapDSSVDH() {
	int slsvDH;
	cout << "nhap so luong sinh vien dai hoc: "; cin >> slsvDH;
	dssvDH.resize(slsvDH);
	for (int i = 0; i < slsvDH; i++) {
		cout << "nhap sinh vien dai hoc thu " << i + 1 << endl;
		dssvDH[i].nhap();
	}
}
void cDanhSachSV::nhap() {
	nhapDSSVCD();
	nhapDSSVDH();
}

void cDanhSachSV::xuatDSSVCD() {
	string mssv[100];
	string hoTen[100];
	string diaChi[100];
	int tongsotinchi[100]{};
	float dtb[100]{};
	float dtn[100]{};
	int slsvCD = dssvCD.size();
	for (int i = 0; i < slsvCD; i++) {
		mssv[i] = dssvCD[i].getMSSV();
		hoTen[i] = dssvCD[i].getHoTen();
		diaChi[i] = dssvCD[i].getDiaChi();
		tongsotinchi[i] = dssvCD[i].getTongSoTinChi();
		dtb[i] = dssvCD[i].getDTB();
		dtn[i] = dssvCD[i].getDTN();
	}
	cout << setfill('-') << setw(90) << "-" << endl;
	cout << setfill(' ');
	cout << setw(10) << "MSSV" << setw(20) << "Ho va ten" << setw(20) << "Dia chi" << setw(20) << "Tong so TC" << setw(10) << "DTB" << setw(10) << "Diem TN" << endl;
	cout << setfill('-') << setw(90) << "-" << endl;
	cout << setfill(' ');

	for (int i = 0; i < slsvCD; i++) {
		cout << setw(10) << mssv[i] << setw(20) << hoTen[i] << setw(20) << diaChi[i] << setw(20) << tongsotinchi[i] << setw(10) << dtb[i] << setw(10) << dtn[i] << endl;
	}
	cout << setfill('-') << setw(90) << "-" << endl;
}
void cDanhSachSV::xuatDSSVDH() {
	string mssv[100];
	string hoTen[100];
	string diaChi[100];
	int tongsotinchi[100]{};
	float dtb[100]{};
	string tenLV[100];
	float dlv[100]{};
	int slsvDH = dssvDH.size();
	for (int i = 0; i < slsvDH; i++) {
		mssv[i] = dssvDH[i].getMSSV();
		hoTen[i] = dssvDH[i].getHoTen();
		diaChi[i] = dssvDH[i].getDiaChi();
		tongsotinchi[i] = dssvDH[i].getTongSoTinChi();
		dtb[i] = dssvDH[i].getDTB();
		tenLV[i] = dssvDH[i].getTenLuanVan();
		dlv[i] = dssvDH[i].getDLV();
	}
	cout << setfill('-') << setw(120) << "-" << endl;
	cout << setfill(' ');
	cout << setw(10) << "MSSV" << setw(20) << "Ho va ten" << setw(20) << "Dia chi" << setw(20) << "Tong so TC" << setw(10) << "DTB" << setw(20) << "Ten Luan Van" << setw(20) << "Diem Luan Van" << endl;
	cout << setfill('-') << setw(120) << "-" << endl;
	cout << setfill(' ');

	for (int i = 0; i < slsvDH; i++) {
		cout << setw(10) << mssv[i] << setw(20) << hoTen[i] << setw(20) << diaChi[i] << setw(20) << tongsotinchi[i] << setw(10) << dtb[i] << setw(20) << tenLV[i] << setw(20) << dlv[i] << endl;
	}
	cout << setfill('-') << setw(120) << "-" << endl;
}
void cDanhSachSV::xuat() {
	cout << "DANH SACH SINH VIEN CAO DANG\n";
	xuatDSSVCD();
	cout << "DANH SACH SINH VIEN DAI HOC\n";
	xuatDSSVDH();
}

cDanhSachSV cDanhSachSV::DSSVDuDKTN() {
	cDanhSachSV dssvDuDKTN;
	for (cSinhVienCD svcd : dssvCD) {
		if (svcd.xetTN()) {
			dssvDuDKTN.dssvCD.push_back(svcd);
		}
	}
	for (cSinhVienDH svdh : dssvDH) {
		if (svdh.xetTN()) {
			dssvDuDKTN.dssvDH.push_back(svdh);
		}
	}
	return dssvDuDKTN;
}

cDanhSachSV cDanhSachSV::DSSVKhongDuDKTN() {
	cDanhSachSV dssvKhongDuDKTN;
	for (cSinhVienCD svcd : dssvCD) {
		if (!svcd.xetTN()) {
			dssvKhongDuDKTN.dssvCD.push_back(svcd);
		}
	}
	for (cSinhVienDH svdh : dssvDH) {
		if (!svdh.xetTN()) {
			dssvKhongDuDKTN.dssvDH.push_back(svdh);
		}
	}
	return dssvKhongDuDKTN;
}

cDanhSachSV cDanhSachSV::svdh_coDTB_caonhat() {
	cDanhSachSV dssvdhcodtbcaonhat;
	float max = dssvDH[0].getDTB();
	for (cSinhVienDH svdh : dssvDH) {
		if (svdh.getDTB() > max) {
			max = svdh.getDTB();
		}
	}
	for (cSinhVienDH svdh : dssvDH) {
		if (svdh.getDTB() == max) {
			dssvdhcodtbcaonhat.dssvDH.push_back(svdh);
		}
	}
	return dssvdhcodtbcaonhat;
}

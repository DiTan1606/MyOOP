#include "cDanhSachNV.h"
cDanhSachNV::cDanhSachNV() {
	dsnvSX = NULL;
	dsnvVP = NULL;
}

int cDanhSachNV::sizeDSNVSX() {
	int cnt = 0;
	SX* p = dsnvSX;
	while (p != NULL) {
		cnt++;
		p = p->next;
	}
	return cnt;
}
int cDanhSachNV::sizeDSNVVP() {
	int cnt = 0;
	VP* p = dsnvVP;
	while (p != NULL) {
		cnt++;
		p = p->next;
	}
	return cnt;
}

SX* cDanhSachNV::makeDSNVSX() {
	SX* tmp = new SX();
	cNhanVienSX nvsx;
	nvsx.nhap();
	tmp->nvsx = nvsx;
	tmp->next = NULL;
	return tmp;
}
VP* cDanhSachNV::makeDSNVVP() {
	VP* tmp = new VP();
	cNhanVienVP nvvp;
	nvvp.nhap();
	tmp->nvvp = nvvp;
	tmp->next = NULL;
	return tmp;
}

void cDanhSachNV::appendDSNVSX() {
	SX* tmp = makeDSNVSX();
	if (dsnvSX == NULL) {
		dsnvSX = tmp;
	}
	else {
		SX* p = dsnvSX;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = tmp;
	}
}
void cDanhSachNV::appendDSNVVP() {
	VP* tmp = makeDSNVVP();
	if (dsnvVP == NULL) {
		dsnvVP = tmp;
	}
	else {
		VP* p = dsnvVP;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = tmp;
	}
}

void cDanhSachNV::xuatDSNVSX() {
	cout << setfill('-') << setw(100) << "-" << endl;
	cout << setfill(' ');
	cout << setw(20) << "Ho ten" << setw(20) << "ngay sinh" << setw(20) << "luong can ban" << setw(20) << "so san pham" << setw(20) << "luong" << endl;
	cout << setfill('-') << setw(100) << "-" << endl;
	cout << setfill(' ');

	SX* p = dsnvSX;

	while (p != NULL) {
		cout << fixed << setprecision(1) << setw(20) << p->nvsx.getHoTen() << setw(20) << p->nvsx.getNgaySinh() << setw(20) << p->nvsx.getLuongCanBan() << setw(20) << p->nvsx.getSoSanPham() << setw(20) << p->nvsx.tinhLuong() << endl;
		p = p->next;
	}
	cout << setfill('-') << setw(100) << "-" << endl;
}
void cDanhSachNV::xuatDSNVVP() {
	cout << setfill('-') << setw(80) << "-" << endl;
	cout << setfill(' ');
	cout << setw(20) << "Ho ten" << setw(20) << "ngay sinh" <<  setw(20) << "so ngay lam viec" << setw(20) << "luong" << endl;
	cout << setfill('-') << setw(80) << "-" << endl;
	cout << setfill(' ');

	VP* p = dsnvVP;

	while (p != NULL) {
		cout << fixed << setprecision(1) << setw(20) << p->nvvp.getHoTen() << setw(20) << p->nvvp.getNgaySinh() << setw(20)  << p->nvvp.getSoNgayLamViec() << setw(20)  << p->nvvp.tinhLuong() << endl;
		p = p->next;
	}
	cout << setfill('-') << setw(80) << "-" << endl;
}

double cDanhSachNV::tongLuong() {
	double result = 0;
	SX* p = dsnvSX;
	while (p != NULL) {
		result += p->nvsx.tinhLuong();
		p = p->next;
	}

	VP* q = dsnvVP;
	while (q != NULL) {
		result += q->nvvp.tinhLuong();
		q = q->next;
	}
	return result;
}

void cDanhSachNV::deleteDSNVSX(string hoten) {
	SX* truoc = NULL;
	SX* sau = dsnvSX;
	if (sau == NULL) {
		cout << "trong danh sach khong co nhan vien co ho ten: " << hoten << endl;
		return;
	}
	while (sau->nvsx.getHoTen() != hoten) {
		truoc = sau;
		sau = sau->next;
		if (sau == NULL) {
			cout << "trong danh sach khong co nhan vien co ho ten: " << hoten << endl;
			return;
		}
	}
	if (truoc == NULL) {
		dsnvSX = dsnvSX->next;
		cout << "da xoa\n";
	}
	else {
		truoc->next = sau->next;
		cout << "da xoa\n";
	}
}
void cDanhSachNV::deleteDSNVVP(string hoten) {
	VP* truoc = NULL;
	VP* sau = dsnvVP;
	if (sau == NULL) {
		cout << "trong danh sach khong co nhan vien co ho ten: " << hoten << endl;
		return;
	}
	while (sau->nvvp.getHoTen() != hoten) {
		truoc = sau;
		sau = sau->next;
		if (sau == NULL) {
			cout << "trong danh sach khong co nhan vien co ho ten: " << hoten << endl;
			return;
		}
	}
	if (truoc == NULL) {
		dsnvVP = dsnvVP->next;
		cout << "da xoa\n";
	}
	else {
		truoc->next = sau->next;
		cout << "da xoa\n";
	}
}
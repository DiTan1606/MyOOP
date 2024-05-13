#include "cDanhSach.h"
cDanhSach::cDanhSach() {
	ds = NULL;
}

DS* cDanhSach::makeDS(string className) {
	DS* tmp = new DS();

	if (className == "cCaSi") {
		cCaSi* obj = new cCaSi();
		obj->nhap();
		tmp->infor = obj;
	}
	else if (className == "cCongNhan") {
		cCongNhan* obj = new cCongNhan();
		obj->nhap();
		tmp->infor = obj;
	}
	else if (className == "cHocSinh") {
		cHocSinh* obj = new cHocSinh();
		obj->nhap();
		tmp->infor = obj;
	}
	else if (className == "cNgheSi") {
		cNgheSi* obj = new cNgheSi();
		obj->nhap();
		tmp->infor = obj;
	}
	else if (className == "cSinhVien") {
		cSinhVien* obj = new cSinhVien();
		obj->nhap();
		tmp->infor = obj;
	}

	tmp->next = NULL;
	return tmp;
}

void cDanhSach::append(string className) {
	DS* tmp = makeDS(className);
	if (ds == NULL) {
		ds = tmp;
	}
	else {
		DS* p = ds;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = tmp;
	}
}
void cDanhSach::xuat() {
	DS* p = ds;
	int i = 1;
	while (p != NULL) {
		cout << setfill('-') << setw(140) << "-" << endl;
		cout << setfill(' ');
		cout << setw(2) << i;
		p->infor->xuat();
		i++;
		p = p->next;
	}
	cout << setfill('-') << setw(140) << "-" << endl;
}
void cDanhSach::xoa(int i) {
	int index = 1;
	DS* truoc = NULL;
	DS* sau = ds;

	if (sau == NULL) {
		cout << "Danh sach rong" << endl;
		return;
	}

	if (i == 1) {
		ds = ds->next;
		delete sau;
		cout << "Da xoa" << endl;
		return;
	}

	while (index != i) {
		truoc = sau;
		sau = sau->next;
		if (sau == NULL) {
			cout << "STT tren khong co trong danh sach" << endl;
			return;
		}
		index++;
	}

	truoc->next = sau->next;
	delete sau;
	cout << "Da xoa" << endl;
}

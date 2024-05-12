#include "cDanhSachSV.h"

cDanhSachSV::cDanhSachSV() {
	dssvCD = NULL;
	dssvDH = NULL;
}

int cDanhSachSV::sizeDSSVCD() {
	int cnt = 0;
	CD* p = dssvCD;
	while (p != NULL) {
		cnt++;
		p = p->next;
	}
	return cnt;
}
int cDanhSachSV::sizeDSSVDH() {
	int cnt = 0;
	DH* p = dssvDH;
	while (p != NULL) {
		cnt++;
		p = p->next;
	}
	return cnt;
}

CD* cDanhSachSV::makeDSSVCD() {
	CD* tmp = new CD();
	cSinhVienCD sv;
	sv.nhap();
	tmp->svcd = sv;
	tmp->next = NULL;
	return tmp;
}
DH* cDanhSachSV::makeDSSVDH() {
	DH* tmp = new DH();
	cSinhVienDH sv;
	sv.nhap();
	tmp->svdh = sv;
	tmp->next = NULL;
	return tmp;
}

CD* cDanhSachSV::makeDSSVCD(cSinhVienCD svcd) {
	CD* tmp = new CD();
	tmp->svcd = svcd;
	tmp->next = NULL;
	return tmp;
}
DH* cDanhSachSV::makeDSSVDH(cSinhVienDH svdh) {
	DH* tmp = new DH();
	tmp->svdh = svdh;
	tmp->next = NULL;
	return tmp;
}

void cDanhSachSV::appendSVCD() {
	CD* tmp = makeDSSVCD();
	if (dssvCD == NULL) {
		dssvCD = tmp;
	}
	else {
		CD* p = dssvCD;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = tmp;
	}
}
void cDanhSachSV::appendSVDH() {
	DH* tmp = makeDSSVDH();
	if (dssvDH == NULL) {
		dssvDH = tmp;
	}
	else {
		DH* p = dssvDH;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = tmp;
	}
}

void cDanhSachSV::appendSVCD(CD* svcd) {
	if (dssvCD == NULL) {
		dssvCD = svcd;
	}
	else {
		CD* tmp = dssvCD;
		while (tmp->next != NULL) {
			tmp = tmp->next;
		}
		tmp->next = svcd;
	}
}
void cDanhSachSV::appendSVDH(DH* svdh) {
	if (dssvDH == NULL) {
		dssvDH = svdh;
	}
	else {
		DH* tmp = dssvDH;
		while (tmp->next != NULL) {
			tmp = tmp->next;
		}
		tmp->next = svdh;
	}
}
void cDanhSachSV::deleteSVCD(string mssv) {
	CD* truoc = NULL;
	CD* sau = dssvCD;
	if (sau == NULL) {
		cout << "trong danh sach khong co sinh vien co mssv: " << mssv << endl;
		return;
	}
	while (sau->svcd.getMSSV() != mssv) {
		truoc = sau;
		sau = sau->next;
		if (sau == NULL) {
			cout << "trong danh sach khong co sinh vien co mssv: " << mssv << endl;
			return;
		}
	}
	if (truoc == NULL) {
		dssvCD = dssvCD->next;
		cout << "da xoa\n";
	}
	else {
		truoc->next = sau->next;
		cout << "da xoa\n";
	}
}
void cDanhSachSV::deleteSVDH(string mssv) {
	DH* truoc = NULL;
	DH* sau = dssvDH;
	if (sau == NULL) {
		cout << "trong danh sach khong co sinh vien co mssv: " << mssv << endl;
		return;
	}
	while (sau->svdh.getMSSV() != mssv) {
		truoc = sau;
		sau = sau->next;
		if (sau == NULL) {
			cout << "trong danh sach khong co sinh vien co mssv: " << mssv << endl;
			return;
		}
	}
	if (truoc == NULL) {
		dssvDH = dssvDH->next;
		cout << "da xoa\n";
	}
	else {
		truoc->next = sau->next;
		cout << "da xoa\n";
	}
}
void cDanhSachSV::xuatDSSVCD() {
	cout << setfill('-') << setw(90) << "-" << endl;
	cout << setfill(' ');
	cout << setw(10) << "MSSV" << setw(20) << "Ho va ten" << setw(20) << "Dia chi" << setw(20) << "Tong so TC" << setw(10) << "DTB" << setw(10) << "Diem TN" << endl;
	cout << setfill('-') << setw(90) << "-" << endl;
	cout << setfill(' ');

	CD* p = dssvCD;

	while (p != NULL) {
		cout << setw(10) << p->svcd.getMSSV() << setw(20) << p->svcd.getHoTen() << setw(20) << p->svcd.getDiaChi() << setw(20) << p->svcd.getTongSoTinChi() << setw(10) << p->svcd.getDTB() << setw(10) << p->svcd.getDTN() << endl;
		p = p->next;
	}
	cout << setfill('-') << setw(90) << "-" << endl;
}
void cDanhSachSV::xuatDSSVDH() {

	cout << setfill('-') << setw(120) << "-" << endl;
	cout << setfill(' ');
	cout << setw(10) << "MSSV" << setw(20) << "Ho va ten" << setw(20) << "Dia chi" << setw(20) << "Tong so TC" << setw(10) << "DTB" << setw(20) << "Ten Luan Van" << setw(20) << "Diem Luan Van" << endl;
	cout << setfill('-') << setw(120) << "-" << endl;
	cout << setfill(' ');

	DH* p = dssvDH;

	while (p != NULL) {
		cout << setw(10) << p->svdh.getMSSV() << setw(20) << p->svdh.getHoTen() << setw(20) << p->svdh.getDiaChi() << setw(20) << p->svdh.getTongSoTinChi() << setw(10) << p->svdh.getDTB() << setw(20) << p->svdh.getTenLuanVan() << setw(20) << p->svdh.getDLV() << endl;
		p = p->next;
	}
	cout << setfill('-') << setw(120) << "-" << endl;
}

cDanhSachSV cDanhSachSV::DSSVDuDKTN() {
	cDanhSachSV dssvdudktn;

	CD* p = dssvCD;
	while (p != NULL) {
		if (p->svcd.xetTN()) {
			CD* tmp1 = makeDSSVCD(p->svcd);
			dssvdudktn.appendSVCD(tmp1);
		}
		p = p->next;
	}
	DH* q = dssvDH;
	while (q != NULL) {
		if (q->svdh.xetTN()) {
			DH* tmp2 = makeDSSVDH(q->svdh);
			dssvdudktn.appendSVDH(tmp2);
		}
		q = q->next;
	}

	return dssvdudktn;
}
cDanhSachSV cDanhSachSV::DSSVKhongDuDKTN() {
	cDanhSachSV dssvkhongdudktn;
	CD* p = dssvCD;
	while (p != NULL) {
		if (!(p->svcd.xetTN())) {
			CD* tmp1 = makeDSSVCD(p->svcd);
			dssvkhongdudktn.appendSVCD(tmp1);
		}
		p = p->next;
	}
	DH* q = dssvDH;
	while (q != NULL) {
		if (!(q->svdh.xetTN())) {
			DH* tmp2 = makeDSSVDH(q->svdh);
			dssvkhongdudktn.appendSVDH(tmp2);
		}
		q = q->next;
	}
	return dssvkhongdudktn;
}

cDanhSachSV cDanhSachSV::DSSVDHCoDTBCaoNhat() {
	cDanhSachSV dssvdhcodtbcaonhat;
	float max = dssvDH->svdh.getDTB();
	DH* p = dssvDH;
	while (p != NULL) {
		if (p->svdh.getDTB() > max) {
			max = p->svdh.getDTB();
		}
		p = p->next;
	}

	DH* q = dssvDH;
	while (q != NULL) {
		if (q->svdh.getDTB() == max) {
			DH* tmp = makeDSSVDH(q->svdh);
			dssvdhcodtbcaonhat.appendSVDH(tmp);
		}
		q = q->next;
	}
	return dssvdhcodtbcaonhat;
}
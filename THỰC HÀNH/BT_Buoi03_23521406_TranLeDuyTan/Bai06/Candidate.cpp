#include "Candidate.h"
Candidate::Candidate() {}
Candidate::Candidate(string ma, string name, string ngaySinh, float diemToan, float diemVan, float diemAnh) 
	: ma(ma), name(name), ngaySinh(ngaySinh), diemToan(diemToan), diemVan(diemVan), diemAnh(diemAnh) {}
float Candidate::tongDiem() const {
	return diemToan + diemVan + diemAnh;
}
void Candidate::nhap() {
    cout << "nhap ma: ";
    cin >> ma;
    cin.ignore(); 

    cout << "nhap Ho va ten: ";
    getline(cin, name);

    cout << "nhap ngay sinh (dd/mm/yyyy): ";
    getline(cin, ngaySinh);

    cout << "nhap diem Toan: ";
    cin >> diemToan;
    cin.ignore(); 

    cout << "nhap diem Van: ";
    cin >> diemVan;
    cin.ignore(); 

    cout << "nhap diem Anh: ";
    cin >> diemAnh;
    cin.ignore();
}
void Candidate::xuat() {
    cout << "MSSV: " << ma << endl;
	cout << "Ho va ten: " << name << endl;
	cout << "Ngay sinh: " << ngaySinh << endl;
	cout << "Diem Toan: " << diemToan << endl;
	cout << "Diem Van: " << diemVan << endl;
	cout << "Diem Anh: " << diemAnh << endl;
    cout << "Tong Diem: " << tongDiem() << endl;
}
string Candidate::getName() {
    return name;
}

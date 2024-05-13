#include <iostream>
#include "cDanhSachNV.h"

int main()
{
    cDanhSachNV dsnv;
    
    while (1) {
        cout << "----------------------------------------------------------------------------------------------------\n";
        cout << "DANH SACH NHAN VIEN SAN XUAT:\n";
        dsnv.xuatDSNVSX();
        cout << "DANH SACH NHAN VIEN VAN PHONG:\n";
        dsnv.xuatDSNVVP();
        cout << "------------------------------------------------MENU------------------------------------------------\n";
        cout << "1. Them mot nhan vien san xuat vao danh sach\n";
        cout << "2. Xoa mot nhan vien san xuat khoi danh sach theo ten\n";
        cout << "3. So luong nhan vien san xuat trong danh sach\n";
        cout << "4. Them mot nhan vien van phong vao danh sach\n";
        cout << "5. Xoa mot nhen vien van phong khoi danh sach\n";
        cout << "6. So luong sinh vien van phong trong danh sach\n";
        cout << "7. Tong luong ma cong ty phai tra cho nhan vien\n";
        cout << "8. Thoat\n";
        cout << "khac. NHAP LAI\n";
        cout << "----------------------------------------------------------------------------------------------------\n";
        cout << "nhap lua chon cua ban: ";
        string lc;
        cin >> lc;
        if (lc == "1") {
            cout << "nhap thong tin nhan vien san xuat can them:\n";
            dsnv.appendDSNVSX();
            system("cls");
            cout << "da them\n";
        }
        else if (lc == "2") {
            string hoten;
            cout << "nhap ho ten nhan vien can xoa: ";
            cin.ignore();
            getline(cin, hoten);
            dsnv.deleteDSNVSX(hoten);
            system("cls");
        }
        else if (lc == "3") {
            system("cls");
            cout << "danh sach co " << dsnv.sizeDSNVSX() << " nhan vien san xuat\n";
        }
        else if (lc == "4") {
            cout << "nhap thong tin nhan vien van phong can them:\n";
            dsnv.appendDSNVVP();
            system("cls");
            cout << "da them\n";
        }
        else if (lc == "5") {
            string hoten;
            cout << "nhap ho ten nhan vien can xoa: ";
            cin.ignore();
            getline(cin, hoten);
            dsnv.deleteDSNVVP(hoten);
            system("cls");
        }
        else if (lc == "6") {
            system("cls");
            cout << "danh sach co " << dsnv.sizeDSNVVP() << " nhan vien van phong\n";
        }
        else if (lc == "7") {
            system("cls");
            cout << "tong luong ma cong ty phai tra cho nhan vien: " << fixed << setprecision(1) << dsnv.tongLuong() << endl;
        }
        else if (lc == "8") {
            system("cls");
            break;
        }
        else {
            system("cls");
            continue;
        }
    }
    return 0;
}

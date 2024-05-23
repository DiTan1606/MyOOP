#include <iostream>
#include "cDanhSachSV.h"

int main()
{
    cDanhSachSV ds;
    string lc;
    while (1) {
        cout << setfill('-') << setw(58) << '-';
        cout << "MENU";
        cout << setfill('-') << setw(58) << '-' << endl;
        cout << "1. nhap danh sach sinh vien\n";
        cout << "2. xuat danh sach sinh vien du dieu kien tot nghiep\n";
        cout << "3. xuat danh sach sinh vien khong du dieu kien tot nghiep\n";
        cout << "4. xuat danh sach sinh vien dai hoc co diem trung binh cao nhat\n";
        cout << "5. xuat danh sach sinh vien cao dang co diem trung binh cao nhat\n";
        cout << "6. so luong sinh vien khong du dieu kien tot nghiep moi loai\n";
        cout << "7. thoat\n";
        cout << "khac: nhap lai\n";
        cout << setfill('-') << setw(120) << '-' << endl;
        ds.xuat();
        cout << setfill('-') << setw(120) << '-' << endl;
        cout << "nhap lua chon: ";
        cin >> lc;
        if(lc == "1") {
            ds.nhap();
            system("cls");
        }
        else if (lc == "2") {
            system("cls");
            cout << "danh sach sv du dktn: \n";
            ds.duDKTN().xuat();
        }
        else if (lc == "3") {
            system("cls");

            cout << "danh sach sv khong du dktn: \n";
            ds.khongDuDKTN().xuat();
        }
        else if (lc == "4") {
            system("cls");

            cout << "danh sach svdh co dtb cao nhat: \n";
            ds.SVDHCoDTBCaoNhat().xuat();
        }
        else if (lc == "5") {
            system("cls");

            cout << "danh sach svcd co dtb cao nhat: \n";
            ds.SVCDCoDTBCaoNhat().xuat();
        }
        else if (lc == "6") {
            system("cls");

            cout << "So luong SVCD khong du dieu kien tot nhiep: " << ds.SLSVCDKhongDuDKTN() << endl;
            cout << "So luong SVDH khong du dieu kien tot nghiep: " << ds.SLSVDHKhongDuDKTN() << endl;
        }
        else if (lc == "7") {
            break;
        }
        else {
            continue;
        }
    }
}

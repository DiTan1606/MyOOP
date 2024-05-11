#include <iostream>
#include "cDanhSachSV.h"

int main()
{
    cDanhSachSV dssv;

    while (1) {
        cout << "----------------------------------------------------------MENU----------------------------------------------------------\n";
        cout << "1. them mot sinh vien Cao Dang\n";
        cout << "2. xoa mot sinh vien Cao Dang theo mssv\n";
        cout << "3. so luong sinh vien Cao Dang\n";

        cout << "4. them mot sinh vien Dai Hoc\n";
        cout << "5. xoa mot sinh vien Dai Hoc theo mssv\n";
        cout << "6. so luong sinh vien Dai Hoc\n";

        cout << "7. xuat danh sach sinh vien du dieu kien tot nghiep\n";
        cout << "8. xuat danh sach sinh vien khong du dieu kien tot nghiep\n";

        cout << "9. xuat danh sach sinh vien dai hoc co DTB cao nhat\n";
        cout << "khac: thoat\n";
        cout << "------------------------------------------------------------------------------------------------------------------------\n";

        cout << "DANH SACH SVCD:\n";
        dssv.xuatDSSVCD();
        cout << "DANH SACH SVDH:\n";
        dssv.xuatDSSVDH();
        cout << "Nhap lua chon: ";
        int lc; cin >> lc;

        if (lc == 1) {
            system("cls");
            cout << "nhap thong tin sinh vien cao dang can them: \n";
            dssv.appendSVCD();
        }
        else if (lc == 2) {
            string mssv;
            cout << "nhap mssv cua sinh vien CD can xoa: "; cin >> mssv;
            system("cls");
            dssv.deleteSVCD(mssv);
            
        }
        else if (lc == 3) {
            system("cls");
            cout << "co " << dssv.sizeDSSVCD() << " sinh vien cao dang\n";
        }


        else if (lc == 4) {
            system("cls");
            cout << "nhap thong tin sinh vien dai hoc can them: \n";
            dssv.appendSVDH();
        }
        else if (lc == 5) {
            string mssv;
            cout << "nhap mssv cua sinh vien DH can xoa: "; cin >> mssv;
            system("cls");
            dssv.deleteSVDH(mssv);
        }
        else if (lc == 6) {
            system("cls");
            cout << "co " << dssv.sizeDSSVDH() << " sinh vien dai hoc\n";
        }
        else if (lc == 7) {
            system("cls");
            cout << "DANH SACH SINH VIEN DU DIEU KIEN TOT NGHIEP:\n";
            cout << "DANH SACH SVCD:\n";
            dssv.DSSVDuDKTN().xuatDSSVCD();
            cout << "DANH SACH SVDH:\n";
            dssv.DSSVDuDKTN().xuatDSSVDH();
        }
        else if (lc == 8) {
            system("cls");
            cout << "DANH SACH SINH VIEN KHONG DU DIEU KIEN TOT NGHIEP:\n";
            cout << "DANH SACH SVCD:\n";
            dssv.DSSVKhongDuDKTN().xuatDSSVCD();
            cout << "DANH SACH SVDH:\n";
            dssv.DSSVKhongDuDKTN().xuatDSSVDH();
        }
        else if (lc == 9) {
            system("cls");
            cout << "DANH SACH SINH VIEN DAI HOC CO DIEM TRUNG BINH CAO NHAT:\n";
            dssv.DSSVDHCoDTBCaoNhat().xuatDSSVDH();
        }
        else {
            system("cls");
            break;
        }
    }
    return 0;
}

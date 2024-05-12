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
        cout << "10 thoat\n";
        cout << "khac: nhap lai\n";
        cout << "------------------------------------------------------------------------------------------------------------------------\n";

        cout << "DANH SACH SVCD:\n";
        dssv.xuatDSSVCD();
        cout << "DANH SACH SVDH:\n";
        dssv.xuatDSSVDH();
        cout << "Nhap lua chon: ";
        string lc; cin >> lc;

        if (lc == "1") {
            system("cls");
            cout << "nhap thong tin sinh vien cao dang can them: \n";
            dssv.appendSVCD();
        }
        else if (lc == "2") {
            string mssv;
            cout << "nhap mssv cua sinh vien CD can xoa: "; cin >> mssv;
            system("cls");
            dssv.deleteSVCD(mssv);

        }
        else if (lc == "3") {
            system("cls");
            cout << "co " << dssv.sizeDSSVCD() << " sinh vien cao dang\n";
        }


        else if (lc == "4") {
            system("cls");
            cout << "nhap thong tin sinh vien dai hoc can them: \n";
            dssv.appendSVDH();
        }
        else if (lc == "5") {
            string mssv;
            cout << "nhap mssv cua sinh vien DH can xoa: "; cin >> mssv;
            system("cls");
            dssv.deleteSVDH(mssv);
        }
        else if (lc == "6") {
            system("cls");
            cout << "co " << dssv.sizeDSSVDH() << " sinh vien dai hoc\n";
        }
        else if (lc == "7") {
            system("cls");
            cout << "DANH SACH SINH VIEN DU DIEU KIEN TOT NGHIEP:\n";
            cout << "DANH SACH SVCD:\n";
            cDanhSachSV dssvdudktn = dssv.DSSVDuDKTN();
            dssvdudktn.xuatDSSVCD();
            cout << "DANH SACH SVDH:\n";
            dssvdudktn.xuatDSSVDH();
        }
        else if (lc == "8") {
            system("cls");
            cout << "DANH SACH SINH VIEN KHONG DU DIEU KIEN TOT NGHIEP:\n";
            cout << "DANH SACH SVCD:\n";
            cDanhSachSV dssvkhongdudktn = dssv.DSSVKhongDuDKTN();
            dssvkhongdudktn.xuatDSSVCD();
            cout << "DANH SACH SVDH:\n";
            dssvkhongdudktn.xuatDSSVDH();
        }
        else if (lc == "9") {
            system("cls");
            cout << "DANH SACH SINH VIEN DAI HOC CO DIEM TRUNG BINH CAO NHAT:\n";
            cDanhSachSV dssvdhcodtbcaonhat = dssv.DSSVDHCoDTBCaoNhat();
            dssvdhcodtbcaonhat.xuatDSSVDH();
        }
        else if (lc == "10") {
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

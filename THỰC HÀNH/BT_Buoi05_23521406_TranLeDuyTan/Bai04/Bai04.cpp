#include <iostream>
#include "cDanhSach.h"

int main()
{
    cDanhSach ds;
    string luachon;
    while (1) {
        cout << "-----------------------------------MENU-----------------------------------\n";
        cout << "1. Them mot doi tuong vao danh sach\n";
        cout << "2. Xoa mot doi tuong khoi danh sach\n";
        cout << "3. thoat\n";
        cout << "khac: nhap lai\n";
        cout << "--------------------------------------------------------------------------\n";
        cout << "DANH SACH\n";
        ds.xuat();
        cout << "--------------------------------------------------------------------------\n";
        cout << "nhap lua chon: ";
        cin >> luachon;

        if (luachon == "1") {
            string lc;
            system("cls");
            while (1) {
                cout << "-------------------------------THEMDOITUONG-------------------------------\n";
                cout << "1. Them doi tuong CA SI\n";
                cout << "2. Them doi tuong CONG NHAN\n";
                cout << "3. Them doi tuong HOC SINH\n";
                cout << "4. Them doi tuong NGHE SI\n";
                cout << "5. Them doi tuong SINH VIEN\n";
                cout << "6. thoat\n";
                cout << "khac: nhap lai\n";
                cout << "--------------------------------------------------------------------------\n";
                cout << "nhap lua chon: ";
                cin >> lc;

                if (lc == "1") {
                    ds.append("cCaSi");
                    system("cls");
                    break;
                }
                else if (lc == "2") {
                    ds.append("cCongNhan");
                    system("cls");
                    break;
                }
                else if (lc == "3") {
                    ds.append("cHocSinh");
                    system("cls");
                    break;
                }
                else if (lc == "4") {
                    ds.append("cNgheSi");
                    system("cls");
                    break;
                }
                else if (lc == "5") {
                    ds.append("cSinhVien");
                    system("cls");
                    break;
                }
                else if (lc == "6") {
                    system("cls");
                    break;
                }
                else {
                    system("cls");
                    continue;
                }
            }
        }

        else if (luachon == "2") {
            int stt;
            cout << "Nhap STT doi tuong muon xoa: "; cin >> stt;
            system("cls");
            ds.xoa(stt);
        }

        else if (luachon == "3") {
            system("cls");
            break;
        }
        else {
            system("cls");
            continue;
        }

    }
}

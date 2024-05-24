#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include "cNongTrai.h"
#include <windows.h> 

using namespace std;

cNongTrai nongtrai;
mutex mtx;

void printClock() {
    int hour = 0, minute = 0, second = 0;

    while (true) {
        lock_guard<mutex> lock(mtx);
        cout << "\r" << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << ":" << setw(2) << setfill('0') << second;
        cout.flush(); 

        second++;
        if (second == 60) {
            second = 0;
            minute++;
            if (minute == 60) {
                minute = 0;
                hour++;
                if (hour == 24) {
                    hour = 0;
                }
            }
        }

        this_thread::sleep_for(chrono::milliseconds(1000));
    }
}

void content() {
    while (1) {
        {
            lock_guard<mutex> lock(mtx);
            system("cls");
            cout << "-------------------------------THONG-TIN-NONG-TRAI------------------------------\n";
            cout << "Nong trai chan nuoi 3 loai gia suc:\n";
            cout << endl;
            cout << "Bo:  + Tieng keu : Moo Mooo!\n";
            cout << "     + So lit sua moi luot cho sua: 0 - 20 lit\n";
            cout << "     + So con de moi lua: 1 - 2 con\n";
            cout << "     + Thoi gian doi: 30s\n";
            cout << "     + Thoi gian giua 2 lua de con: 60s\n";
            cout << "     + Thoi gian giua 2 luot cho sua: 40s\n";
            cout << endl;
            cout << "Cuu: + Tieng keu : Mee meee!\n";
            cout << "     + So lit sua moi luot cho sua: 0 - 5 lit\n";
            cout << "     + So con de moi lua: 1 - 2 con\n";
            cout << "     + Thoi gian doi: 25s\n";
            cout << "     + Thoi gian giua 2 lua de con: 35s\n";
            cout << "     + Thoi gian giua 2 luot cho sua: 20s\n";
            cout << endl;
            cout << "De:  + Tieng keu : Bee beee!\n";
            cout << "     + So lit sua moi luot cho sua: 0 - 10 lit\n";
            cout << "     + So con de moi lua: 1 - 2 con\n";
            cout << "     + Thoi gian doi: 20s\n";
            cout << "     + Thoi gian giua 2 lua de con: 40s\n";
            cout << "     + Thoi gian giua 2 luot cho sua: 15s\n";
            cout << "--------------------------------------------------------------------------------\n";
            cout << "TINH TRANG NONG TRAI\n";
            nongtrai.xuat();
            cout << "Tong so luong gia suc: " << nongtrai.tongSL() << endl;
            cout << "Tong luong sua: " << nongtrai.tongLuongSua() << " lit" << endl;
            cout << "--------------------------------------------------------------------------------\n";
        }
        this_thread::sleep_for(chrono::seconds(1));
    }
}

int main() {
    nongtrai.nhap();

    cGiaSuc* bo = nongtrai.getGiaSuc(1);
    cGiaSuc* cuu = nongtrai.getGiaSuc(2);
    cGiaSuc* de = nongtrai.getGiaSuc(3);

    thread boChoSua([&]() { bo->choSua(); });
    thread cuuChoSua([&]() { cuu->choSua(); });
    thread deChoSua([&]() { de->choSua(); });

    thread boDeCon([&]() { bo->sinhCon(); });
    thread cuuDeCon([&]() { cuu->sinhCon(); });
    thread deDeCon([&]() { de->sinhCon(); });


    thread boKeu([&]() { bo->Keu(); });
    thread cuuKeu([&]() { cuu->Keu(); });
    thread deKeu([&]() { de->Keu(); });

    thread displayCT(content);
    thread displayTime(printClock);

    boChoSua.join();
    cuuChoSua.join();
    deChoSua.join();

    boDeCon.join();
    cuuDeCon.join();
    deDeCon.join();

    boKeu.join();
    cuuKeu.join();
    deKeu.join();

    displayCT.join();

    return 0;
}

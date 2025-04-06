//
// Created by ViKa on 06-04-2025.
//
#include <iostream>

using namespace std;

 struct PhanSo {
         int tu;
         int mau;
         PhanSo(): tu(0), mau(0) {}
     };
     typedef struct PhanSo PHANSO;

     void Nhap(PHANSO&);
     void Xuat(PHANSO);
     PHANSO PhanSoLonNhat(PHANSO, PHANSO);

     int main() {
         PHANSO ps1, ps2;
         Nhap(ps1);
         Nhap(ps2);
         PHANSO kq = PhanSoLonNhat(ps1, ps2);
         Xuat(kq);
         return 0;
     }
     void Nhap(PHANSO &ps) {
         cout << "\nNhập tử số: ";
         cin >> ps.tu;
         cout << "\nNhập mẫu số: ";
         cin >> ps.mau;
     }
     void Xuat(PHANSO ps) {
         cout << "Phân số lớn hơn là: " << ps.tu << "/" << ps.mau << endl;
     }
     PHANSO PhanSoLonNhat(PHANSO ps1, PHANSO ps2) {
         if (ps1.mau == ps2.mau) {
           if (ps1.tu > ps2.tu)
             return ps1;
           else
             return ps2;
         } else if (ps1.tu == ps2.tu) {
           if (ps1.mau > ps2.mau)
             return ps2;
           else
             return ps1;
         } else {
             if ((ps1.tu*ps2.mau) > (ps1.mau*ps2.tu))
               return ps1;
             else
               return ps2;
         }
     }
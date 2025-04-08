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
 int SoSanh(PHANSO, PHANSO);
 //PHANSO PhanSoLonNhat(PHANSO, PHANSO);

 int main() {
     PHANSO ps1, ps2;
     cout << "\nNhập Phân số thứ nhất: ";
     Nhap(ps1);
     cout << "\nNhập Phân số thứ hai: ";
     Nhap(ps2);
     //PHANSO kq = PhanSoLonNhat(ps1, ps2);
     int kq = SoSanh(ps1, ps2);
     if (kq > 0)
         Xuat(ps1);
     else if (kq < 0)
         Xuat(ps2);
     else
         cout << "\nHai phân số bằng nhau.";
     return 0;
 }
 void Nhap(PHANSO &ps) {
     cout << "\nNhập tử số: ";
     cin >> ps.tu;
     cout << "\nNhập mẫu số: ";
     cin >> ps.mau;
 }
 void Xuat(PHANSO ps) {
     cout << "\nPhân số lớn hơn là: " << ps.tu << "/" << ps.mau << endl;
 }
// Cách 1:
int SoSanh(PHANSO ps1, PHANSO ps2) {
     float a = static_cast<float>(ps1.tu) / static_cast<float>(ps1.mau);
     float b = static_cast<float>(ps2.tu) / static_cast<float>(ps2.mau);
     if (a < b)
         return -1;
     if (a > b)
         return 1;
     return 0;
 }
// Cách 2:
 // PHANSO PhanSoLonNhat(PHANSO ps1, PHANSO ps2) {
 //     if (ps1.mau == ps2.mau) {
 //       if (ps1.tu > ps2.tu)
 //         return ps1;
 //       else
 //         return ps2;
 //     } else if (ps1.tu == ps2.tu) {
 //       if (ps1.mau > ps2.mau)
 //         return ps2;
 //       else
 //         return ps1;
 //     } else {
 //         if ((ps1.tu*ps2.mau) > (ps1.mau*ps2.tu))
 //           return ps1;
 //         else
 //           return ps2;
 //     }
 // }
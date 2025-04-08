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
PHANSO Tong(PHANSO, PHANSO);
PHANSO Hieu(PHANSO, PHANSO);
PHANSO Tich(PHANSO, PHANSO);
PHANSO Thuong(PHANSO, PHANSO);
int main() {
  PHANSO ps1, ps2;
  cout << "\nNhập phân số thứ nhất: ";
  Nhap(ps1);
  cout << "\nNhập phân số thứ hai: ";
  Nhap(ps2);
  PHANSO kq = Tong(ps1, ps2);
  cout << "\nTổng hai phân số là: ";
  Xuat(kq);
  kq = Hieu(ps1, ps2);
  cout << "\nHiệu hai phân số là: ";
  Xuat(kq);
  kq = Tich(ps1, ps2);
  cout << "\nTích hai phân số là: ";
  Xuat(kq);
  kq = Thuong(ps1, ps2);
  cout << "\nThương hai phân số là: ";
  Xuat(kq);
  return 0;
}
void Nhap(PHANSO &ps) {
  cout << "\nNhập tử số: ";
  cin >> ps.tu;
  cout << "\nNhập mẫu số: ";
  cin >> ps.mau;
}
void Xuat(PHANSO kq) {
  cout << kq.tu << "/" << kq.mau << endl;
}
PHANSO Tong(PHANSO ps1, PHANSO ps2){
  PHANSO temp;
  temp.tu = (ps1.tu * ps2.mau) + (ps2.tu * ps1.mau);
  temp.mau = ps1.mau * ps2.mau;
  return temp;
}
PHANSO Hieu(PHANSO ps1, PHANSO ps2) {
  PHANSO temp;
  temp.tu = (ps1.tu * ps2.mau) - (ps2.tu * ps1.mau);
  temp.mau = ps1.mau * ps2.mau;
  return temp;
}
PHANSO Tich(PHANSO ps1, PHANSO ps2) {
  PHANSO temp;
  temp.tu = ps1.tu * ps2.tu;
  temp.mau = ps1.mau * ps2.mau;
  return temp;
}
PHANSO Thuong(PHANSO ps1, PHANSO ps2) {
  PHANSO temp;
  temp.tu = ps1.tu * ps2.mau;
  temp.mau = ps1.mau * ps2.tu;
  return temp;
}

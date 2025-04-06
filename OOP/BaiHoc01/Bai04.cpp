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
void Xuat(PHANSO, PHANSO, PHANSO, PHANSO);
PHANSO Tong(PHANSO&, PHANSO&);
PHANSO Hieu(PHANSO&, PHANSO&);
PHANSO Tich(PHANSO, PHANSO);
PHANSO Thuong(PHANSO&, PHANSO&);
int main() {
  PHANSO ps1, ps2;
  Nhap(ps1);
  Nhap(ps2);
  Tong(ps1, ps2);
  Hieu(ps1, ps2);
  Tich(ps1, ps2);
  Thuong(ps1, ps2);
  Xuat(Tong, Hieu, Tich, Thuong);
  return 0;
}
void Nhap(PHANSO &ps) {
  cout << "\nNhập tử số: ";
  cin >> ps.tu;
  cout << "\nNhập mẫu số: ";
  cin >> ps.mau;
}
void Xuat(PHANSO Tong, PHANSO Hieu, PHANSO tich, PHANSO thuong) {
  cout << "Tổng của hai phân số là: " << Tong.tu << "/" << Tong.mau << endl;
  cout << "Hieu của hai phân số là: " << Hieu.tu << "/" << Hieu.mau << endl;
  cout << "Tích của hai phân số là: " << Tich.tu << "/" << Tich.mau << endl;
  cout << "Thương của hai phân số là: " << Thuong.tu << "/" << Thuong.mau << endl;
}
PHANSO Tong(PHANSO ps1, PHANSO ps2){

}
PHANSO Hieu(PHANSO&, PHANSO&);
PHANSO Tich(PHANSO, PHANSO);
PHANSO Thuong(PHANSO&, PHANSO&);

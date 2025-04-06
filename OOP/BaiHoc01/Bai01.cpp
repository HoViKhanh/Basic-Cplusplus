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
int XetDau(PHANSO);

int main() {
  PHANSO ps;
  Nhap(ps);
  Xuat(ps);
  return 0;
}
void Nhap(PHANSO& ps) {
  cout << "\nNhập tử số: ";
  cin >> ps.tu;
  cout << "\nNhập mẫu số: ";
  cin >> ps.mau;
}
int XetDau(PHANSO ps) {
  if (ps.tu*ps.mau > 0)
    return 1;
  else if (ps.tu*ps.mau < 0)
    return -1;
  else
    return 0;
}
void Xuat(PHANSO ps) {
  switch (XetDau(ps)) {
    case 1: cout << "Phân số lớn hơn 0";
    break;
    case -1: cout << "Phân số bé hơn 0";
    break;
    case 0: cout << "Phân số bằng 0";
    break;
  default: ;
  }
}

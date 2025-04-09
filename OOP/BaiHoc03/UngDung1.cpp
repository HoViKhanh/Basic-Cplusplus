//
// Created by ViKa on 4/9/2025.
//
#include <iostream>
#include <cmath>

using namespace std;

class CPhanSo {
  private:
    int tu;
    int mau;
  public:
    CPhanSo(): tu(0), mau(0) {}
    void Nhap();
    void Xuat() const;
    void RutGon();
};

int main() {
  CPhanSo ps;
  ps.Nhap();
  cout << "\nPhân số ban đầu: ";
  ps.Xuat();
  ps.RutGon();
  cout << "\nPhân số sau khi rút gọn: ";
  ps.Xuat();
  return 0;
}
void CPhanSo::Nhap() {
  cout << "\nNhập tử: ";
  cin >> tu;
  cout << "\nNhập mẫu: ";
  cin >> mau;
}
void CPhanSo::Xuat() const{
  cout << tu << "/" << mau << endl;
}
void CPhanSo::RutGon() {
  int a = abs(tu);
  int b = abs(mau);
  while (a * b) {
    if (a > b)
      a = a - b;
    else
      b = b - a;
  }
  tu = tu / (a + b);
  mau = mau / (a + b);
}
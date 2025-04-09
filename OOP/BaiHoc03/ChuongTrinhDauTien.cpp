//
// Created by ViKa on 4/9/2025.
//
#include <iostream>
#include <string>

using namespace std;
class CHocSinh {
    private:
      string hoten;
      int toan;
      int van;
      float dtb;
    public:
      CHocSinh() : toan(0), van(0), dtb(0.0f) {}
      void Nhap();
      void Xuat() const;
      void XuLy();
};

int main() {
  CHocSinh hs;
  hs.Nhap();
  hs.XuLy();
  hs.Xuat();
  return 0;
}
void CHocSinh::Nhap() {
  cout << "\nNhập Họ và Tên: ";
  getline(cin, hoten);
  cout << "\nNhập Toán: ";
  cin >> toan;
  cout << "\nNhập Văn: ";
  cin >> van;
}
void CHocSinh::XuLy() {
  dtb = static_cast<float> (toan + van) / 2;
}
void CHocSinh::Xuat() const{
  cout << "\nHọ Tên: " << hoten;
  cout << "\nToán: " << toan;
  cout << "\nVăn: " << van;
  cout << "\nĐiểm trung bình: " << dtb;
}
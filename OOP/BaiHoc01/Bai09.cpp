//
// Created by ViKa on 4/9/2025.
//
#include <iostream>
#include <cmath>

using namespace std;

struct diem{
  float x;
  float y;
  diem(): x(0), y(0) {}
};
typedef struct diem DIEM;
struct duongtron{
  DIEM I;
  float R;
  duongtron(): I(), R() {}
};
typedef struct duongtron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
float ChuVi(DUONGTRON);
float DienTich(DUONGTRON);

int main() {
  DUONGTRON c;
  Nhap(c);
  Xuat(c);
  float chuVi = ChuVi(c);
  cout << "\nChu vi đường tròn là: " << chuVi << endl;
  float dienTich = DienTich(c);
  cout << "\nDiện tích đường tròn là: " << dienTich << endl;\
  return 0;
}

void Nhap(DIEM& A) {
  float temp;
  cout << "\nNhập x: ";
  cin >> temp; A.x = temp;
  cout << "\nNhập y: ";
  cin >> temp; A.y = temp;
}
void Xuat(DIEM A) {
  cout << "\nx= " << A.x << endl;
  cout << "\ny= " << A.y << endl;
}
void Nhap(DUONGTRON& c) {
  cout << "\nNhập tâm";
  Nhap(c.I);
  cout << "\nNhập bán kính: ";
  cin >> c.R;
}
void Xuat(DUONGTRON c) {
  cout << "\nĐường tròn tâm: (" << c.I.x << ", " << c.I.y << ")" << endl;
  cout << "Bán kính: " << c.R << endl;
}
float ChuVi (DUONGTRON c) {
  return 2*M_PI*c.R;
}
float DienTich (DUONGTRON c) {
  return M_PI*c.R*c.R;
}
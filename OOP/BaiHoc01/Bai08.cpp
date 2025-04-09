//
// Created by ViKa on 4/9/2025.
//
#include <iostream>
#include <cmath>

using namespace std;

struct diem {
  float x;
  float y;
  diem(): x(0), y(0) {}
};
typedef struct diem DIEM;
struct tamgiac {
  DIEM A;
  DIEM B;
  DIEM C;
  tamgiac(): A(), B(), C() {}
};
typedef struct tamgiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);
float KhoangCach(DIEM, DIEM);
float ChuVi(TAMGIAC);
float DienTich(TAMGIAC);
DIEM TrongTam(TAMGIAC);

int main() {
  TAMGIAC tamgiac;
  Nhap(tamgiac);
  Xuat(tamgiac);
  float chuVi = ChuVi(tamgiac);
  cout << "\nChu Vi: " << chuVi << endl;
  float dienTich = DienTich(tamgiac);
  cout << "\nDiện tích: " << dienTich << endl;
  DIEM trongTam = TrongTam(tamgiac);
  cout << "\nTrọng tâm tam giác: (" << trongTam.x << ", " << trongTam.y << ")" << endl;
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
float KhoangCach(DIEM A, DIEM B) {
  return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}
void Nhap(TAMGIAC& tamgiac) {
  cout << "\nNhập A";
  Nhap(tamgiac.A);
  cout << "\nNhập B";
  Nhap(tamgiac.B);
  cout << "\nNhập C";
  Nhap(tamgiac.C);
}
void Xuat(TAMGIAC tamgiac) {
  cout << "\n A: ";
  Xuat(tamgiac.A);
  cout << "\n B: ";
  Xuat(tamgiac.B);
  cout << "\n C: ";
  Xuat(tamgiac.C);
}
float ChuVi(TAMGIAC tamgiac) {
  float a = KhoangCach(tamgiac.B, tamgiac.C);
  float b = KhoangCach(tamgiac.A, tamgiac.C);
  float c = KhoangCach(tamgiac.A, tamgiac.B);
  return a + b + c;
}
float DienTich(TAMGIAC tamgiac) {
  float a = KhoangCach(tamgiac.B, tamgiac.C);
  float b = KhoangCach(tamgiac.A, tamgiac.C);
  float c = KhoangCach(tamgiac.A, tamgiac.B);
  float p = (a+b+c)/2;
  return sqrt(p*(p-a)*(p-b)*(p-c));
}
DIEM TrongTam(TAMGIAC tamgiac) {
  DIEM temp;
  temp.x = (tamgiac.A.x + tamgiac.B.x + tamgiac.C.x)/3;
  temp.y = (tamgiac.A.y + tamgiac.B.y + tamgiac.C.y)/3;
  return temp;
}
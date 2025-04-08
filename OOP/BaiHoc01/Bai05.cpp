//
// Created by ViKa on 4/7/2025.
//
#include <iostream>

using namespace std;

struct sophuc{
  float thuc;
  float ao;
  sophuc(): thuc(0), ao(0) {}
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Tong(SOPHUC, SOPHUC);
SOPHUC Hieu(SOPHUC, SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);

int main(){
  SOPHUC a, b;
  cout << "\nSố phức a";
  Nhap(a);
  cout << "\nSố phức b";
  Nhap(b);
  SOPHUC kq = Tong(a, b);
  cout << "\nTổng của 2 số phức là: ";
  Xuat(kq);
  kq = Hieu(a, b);
  cout << "\nHiệu của 2 số phức là: ";
  Xuat(kq);
  kq = Tich(a, b);
  cout << "\nTích của 2 số phức là: ";
  Xuat(kq);
  return 0;
}
void Nhap(SOPHUC &a){
  cout << "\nNhập phần thực: ";
  cin >> a.thuc;
  cout << "\nNhập phần ảo: ";
  cin >> a.ao;
}
void Xuat(SOPHUC a){
  cout << a.thuc << " + " << a.ao << "! " << endl;
}
SOPHUC Tong(SOPHUC a, SOPHUC b){
  SOPHUC temp;
  temp.thuc = a.thuc + b.thuc;
  temp.ao = a.ao + b.ao;
  return temp;
}
SOPHUC Hieu(SOPHUC a, SOPHUC b){
  SOPHUC temp;
  temp.thuc = a.thuc - b.thuc;
  temp.ao = a.ao - b.ao;
  return temp;
}
SOPHUC Tich(SOPHUC a, SOPHUC b){
  SOPHUC temp;
  temp.thuc = a.thuc * b.thuc - a.ao * b.ao;
  temp.ao = a.ao * b.thuc + a.thuc * b.ao;
  return temp;
}

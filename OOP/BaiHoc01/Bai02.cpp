//
// Created by ViKa on 06-04-2025.
//
#include <iostream>
#include <cmath>

using namespace std;

 struct Diem {
     float x;
     float y;
     Diem() : x(0), y(0) {};
 };
 typedef struct Diem DIEM;

 void NhapDiem(DIEM&);
 void XuatDiem(const DIEM&);
 float KhoangCach(DIEM, DIEM);

 int main() {
     DIEM A, B;
     NhapDiem(A);
     NhapDiem(B);
     float ketqua = KhoangCach(A, B);
     XuatDiem(A);
     XuatDiem(B);
     cout << "Khoảng cách giữa 2 điểm A và B là: " << ketqua << endl;
     return 0;
 }
 void NhapDiem(DIEM& A) {
     cout << "\nNhập tọa độ x: ";
     cin >> A.x;
     cout << "\nNhập tọa độ y: ";
     cin >> A.y;
 }

 ostream operator<<(const ostream & lhs, const DIEM & rhs);

 void XuatDiem(const DIEM& A) {
     cout << "Tọa độ điểm là: (" << A.x << ", " << A.y << ")" << endl;
 }
 float KhoangCach(DIEM A, DIEM B) {
     return sqrt(pow((A.x - B.x),2) + pow((A.y - B.y),2));
 }
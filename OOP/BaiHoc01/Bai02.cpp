//
// Created by ViKa on 06-04-2025.
//
#include <iostream>
#include <cmath>

using namespace std;

 struct Diemkg {
     float x;
     float y;
     float z;
     Diemkg() : x(0), y(0), z(0) {};
 };
 typedef struct Diemkg DIEMKG;

 void NhapDiem(DIEMKG&);
 void XuatDiem(const DIEMKG&);
 float KhoangCach(DIEMKG, DIEMKG);

 int main() {
     DIEMKG A, B;
     NhapDiem(A);
     NhapDiem(B);
     float ketqua = KhoangCach(A, B);
     XuatDiem(A);
     XuatDiem(B);
     cout << "Khoảng cách giữa 2 điểm A và B là: " << ketqua << endl;
     return 0;
 }
 void NhapDiem(DIEMKG& A) {
     cout << "\nNhập tọa độ x: ";
     cin >> A.x;
     cout << "\nNhập tọa độ y: ";
     cin >> A.y;
     cout << "\nNhập tọa độ z: ";
     cin >> A.z;
 }

 ostream operator<<(const ostream & lhs, const DIEMKG & rhs);

 void XuatDiem(const DIEMKG& A) {
     cout << "Tọa độ điểm là: (" << A.x << ", " << A.y << ", " << A.z << ")" << endl;
 }
 float KhoangCach(DIEMKG A, DIEMKG B) {
     return sqrt(pow((A.x - B.x),2) + pow((A.y - B.y),2) + pow((A.z - B.z),2));
 }
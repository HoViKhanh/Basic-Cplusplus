//
// Created by ViKa on 06-04-2025.
//
// #include <iostream>
// #include <cmath>
// #include <string>
//
//
// using namespace std;

// Phần 1

// Biến toàn cục
// string hoten;
// int toan, van;
// float diemtrungbinh;

// void Nhap(string&, int&, int&);
// void Xuat(const string&, int, int, float);
// void Xuly(int, int, float&);
//
// int main(){
//   // Biến cục bộ
//   string hoten;
//   int toan, van;
//   float diemtrungbinh;
//
//   Nhap(hoten, toan, van);
//   Xuly(toan, van, diemtrungbinh);
//   Xuat(hoten, toan, van, diemtrungbinh);
//   return 0;
// }
//
// void Nhap(string& hoten, int& toan, int& van) {
//   cout << "Nhập họ và tên học sinh: " << endl;
//   getline(cin, hoten);
//   cout << "Nhập điểm môn Toán: " << endl;
//   cin >> toan;
//   cout << "Nhập điểm môn Văn: " << endl;
//   cin >> van;
// }
// void Xuat(const string& hoten, int toan, int van, float diemtrungbinh) {
//   cout << "\n Họ Tên: " << hoten << endl;
//   cout << "\n Điểm Toán: " << toan << endl;
//   cout << "\n Điểm Văn: " << van << endl;
//   cout << "\n Điểm trung bình: " << diemtrungbinh << endl;
// }
// void Xuly(int toan, int van, float& diemtrungbinh) {
//   diemtrungbinh = static_cast<float>(toan + van)/2;
// }

//Phần 2
// struct HocSinh {
//     string hoten;
//     int toan, van;
//     float diemtrungbinh;
//
//     HocSinh() : toan(0), van(0), diemtrungbinh(0.0) {}
// };
// typedef struct HocSinh HOCSINH;
// void Nhap(HOCSINH&);
// void Xuat(const HOCSINH&);
// void XuLi(HOCSINH&);
//
// int main() {
//     HOCSINH hs;
//     Nhap(hs);
//     XuLi(hs);
//     Xuat(hs);
//     return 0;
// }
// void Nhap(HOCSINH &x) {
//     cout << "Nhập họ và tên học sinh: " << endl;
//     getline(cin, x.hoten);
//     cout << "Nhập điểm môn Toán: " << endl;
//     cin >> x.toan;
//     cout << "Nhập điểm môn Văn: " << endl;
//     cin >> x.van;
// }
// void Xuat(const HOCSINH &x) {
//     cout << "\n Họ và Tên: " << x.hoten;
//     cout << "\n Toán: " << x.toan;
//     cout << "\n Văn: " << x.van;
//     cout << "\n Điểm trung bình: " << x.diemtrungbinh;
// }
// void XuLi(HOCSINH &x) {
//     x.diemtrungbinh = static_cast<float> (x.toan + x.van)/2;
// }

// Ứng dụng 1
// struct PhanSo {
//     int tu;
//     int mau;
//     PhanSo(): tu(0), mau(0) {}
// };
// typedef struct PhanSo PHANSO;
//
// void Nhap(PHANSO&);
// void Xuat(PHANSO);
// void RutGonPhanSo(PHANSO&);
//
// int main() {
//     PHANSO ps;
//     Nhap(ps);
//     RutGonPhanSo(ps);
//     Xuat(ps);
//     return 0;
// }
// void Nhap(PHANSO &ps) {
//     cout << "\nNhập tử số: ";
//     cin >> ps.tu;
//     cout << "\nNhập mẫu số: ";
//     cin >> ps.mau;
// }
// void Xuat(PHANSO ps) {
//     cout << "Phân số sau khi rút gọn là: " << ps.tu << "/" << ps.mau << endl;
// }
// void RutGonPhanSo(PHANSO &ps) {
//     int tuso = abs(ps.tu);
//     int mauso = abs(ps.mau);
//     while (tuso*mauso) {
//         if (tuso > mauso)
//             tuso = tuso - mauso;
//         else
//             mauso = mauso - tuso;
//     }
//     ps.tu = ps.tu / (tuso+mauso);
//     ps.mau = ps.mau / (tuso+mauso);
// }

// Ứng dụng 2
// struct Diem {
//     float x;
//     float y;
//     Diem() : x(0), y(0) {};
// };
// typedef struct Diem DIEM;
//
// void NhapDiem(DIEM&);
// void XuatDiem(const DIEM&);
// float KhoangCach(DIEM, DIEM);
//
// int main() {
//     DIEM A, B;
//     NhapDiem(A);
//     NhapDiem(B);
//     float ketqua = KhoangCach(A, B);
//     XuatDiem(A);
//     XuatDiem(B);
//     cout << "Khoảng cách giữa 2 điểm A và B là: " << ketqua << endl;
//     return 0;
// }
// void NhapDiem(DIEM& A) {
//     cout << "\nNhập tọa độ x: ";
//     cin >> A.x;
//     cout << "\nNhập tọa độ y: ";
//     cin >> A.y;
// }
//
// ostream operator<<(const ostream & lhs, const DIEM & rhs);
//
// void XuatDiem(const DIEM& A) {
//     cout << "Tọa độ điểm là: (" << A.x << ", " << A.y << ")" << endl;
// }
// float KhoangCach(DIEM A, DIEM B) {
//     return sqrt(pow((A.x - B.x),2) + pow((A.y - B.y),2));
// }

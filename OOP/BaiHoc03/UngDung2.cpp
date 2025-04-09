//
// Created by ViKa on 4/9/2025.
//
#include <iostream>
#include <cmath>

using namespace std;

class CDiem {
private:
    int x;
    int y;
public:
    CDiem(): x(0), y(0) {}
    void Nhap();
    void Xuat() const;
    [[nodiscard]] float KhoangCach(CDiem) const;
};

int main() {
    CDiem A, B;
    cout << "\nĐiểm A";
    A.Nhap();
    cout << "\nĐiểm B";
    B.Nhap();
    float khoangCach = B.KhoangCach(A);
    cout << "\nĐiểm A";
    A.Xuat();
    cout << "\nĐiểm B";
    B.Xuat();
    cout << "\nKhoảng cách là: " << khoangCach << endl;
    return 0;
}
void CDiem::Nhap() {
    cout << "\nNhập x: ";
    cin >> x;
    cout <<"\nNhập y: ";
    cin >> y;
}
void CDiem::Xuat() const{
    cout << "(" << x << ", " << y << ")" << endl;
}
float CDiem::KhoangCach(CDiem A) const{
    return static_cast<float> (sqrt(pow(x - A.x, 2) + pow(y - A.y, 2)));
}
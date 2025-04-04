//
// Created by Vika on 04-04-2025.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x1,y1,x2,y2;
    cout << "Nhập lần lượt x1, y1, x2, y2: " << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    float kc=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout << "Khoảng cách giữa chúng là: " << kc << endl;
    return 0;
}
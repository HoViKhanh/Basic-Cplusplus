//
// Created by ViKa on 04-04-2025.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhập n: " << endl;
    cin >> n;
    float S = 0;
    int i = 1;
    while (i <= n) {
        S += 1/static_cast<float>(i);
        i++;
    }
    cout << "Kết quả S(n) là: " << S << endl;
    return 0;
}
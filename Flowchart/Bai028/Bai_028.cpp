//
// Created by ViKa on 04-04-2025.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Nhập n: " << endl;
    cin >> n;
    double S = 0;
    int i = 1;
    while (i <= n) {
        S = S + pow(i, 2);
        i++;
    }
    cout << "Kết quả S(n) là: " << S << endl;
    return 0;
}
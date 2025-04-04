//
// Created by ViKa on 04-04-2025.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhập n: " << endl;
    cin >> n;
    int S = 0;
    int i = 1;
    while (i <= n) {
        S = S + i;
        i = i + 1;
    }
    cout << "Kết quả S(n) là: " << S << endl;
    return 0;
}
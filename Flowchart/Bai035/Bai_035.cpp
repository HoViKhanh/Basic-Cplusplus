//
// Created by ViKa on 04-04-2025.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhập n: " << endl;
    cin >> n;
    int T = 1;
    int i = 1;
    while (i <= n) {
        T = T * i;
        i++;
    }
    cout << "Kết quả giai thừa T(n) là: " << T << endl;
    return 0;
}
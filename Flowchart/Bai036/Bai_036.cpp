//
// Created by ViKa on 04-04-2025.
//
#include <iostream>

using namespace std;

int main() {
    float x;
    int n;
    cout << "Nhập lần lượt x, n: " << endl;
    cin >> x >> n;
    float T = 1;
    int i = 1;
    while(i <= n) {
        T = T * x;
        i++;
    }
    cout << "Kết quả Lũy thừa T(x, n) là: " << T << endl;

    return 0;
}
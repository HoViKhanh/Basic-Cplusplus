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
    int T = 1;
    int i = 1;
    while (i <= n) {
        T = T * i;
        S = S + T;
        i++;
    }
    cout << "Tổng T(" << n << ") là: " << S << endl;
    return 0;
}
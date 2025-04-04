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
    int t = n;
    while (t) {
        int dv = t % 10;
        S = S + dv;
        t = t / 10;
    }
    cout << "Tổng các số nguyên dương của " << n << " là: " << S << endl;
    return 0;
}
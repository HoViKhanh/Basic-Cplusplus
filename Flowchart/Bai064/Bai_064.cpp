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
    n = abs(n);
    int lc = n % 10;
    int t = n;
    while (t) {
        int dv = t % 10;
        if (lc < dv) {
            lc = dv;
        }
        t = t / 10;
    }
    cout << "Chữ số lớn nhất là: " << lc << endl;
    return 0;
}
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
        if (n % i == 0) {
            S += i;
        }
        i++;
    }
    cout << "Tổng các ước của " << n << " là: " << S << endl;
    return 0;
}
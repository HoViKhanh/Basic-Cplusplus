//
// Created by ViKa on 04-04-2025.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhập n: " << endl;
    cin >> n;
    int dem = 0;
    int t = n;
    while (t) {
        dem ++;
        t /= 10;
    }
    cout << "Số lượng chữ số của " << n << " là: " << dem << endl;
    return 0;
}
//
// Created by ViKa on 04-04-2025.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhập n: " << endl;
    cin >> n;
    cout << "Các ước số của " << n << " là: " << endl;
    int i = 1;
    while (i <= n) {
        if (n % i == 0) {
            cout << i << " ";
        }
        i++;
    }
    return 0;
}
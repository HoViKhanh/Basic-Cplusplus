//
// Created by ViKA on 04-04-2025.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhập n: " << endl;
    cin >> n;
    int hc = (n/10)%10;
    cout << "Số hàng chục của n là: " << hc << endl;
    return 0;
}
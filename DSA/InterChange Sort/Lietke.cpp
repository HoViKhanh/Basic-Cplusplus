//
// Created by ViKa on 4/14/2025.
//
#include <iostream>

using namespace std;

void LietKe(int a[], int n){
//  Cach 1
//  for (int i = 0; i <= (n-2); i++){
//    for (int j = 0; j < (n-1); j++){
//      cout << "(" << a[i] << "," << a[j] << ")" << endl;
//    }
//  }
    for (int i = 0; i <= (n-2); i++)
        for (int j = 0; j <= (n-1); j++)
            cout << "(" << a[i] << "," << a[j] << ")" << endl;
};

int main() {
  int n = 10;
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  LietKe(a, n);
  return 0;
}
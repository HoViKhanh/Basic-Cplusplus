//
// Created by ViKa on 4/14/2025.
//
#include <iostream>

using namespace std;

int DemSoCap(int a[], int n){
  // Cách 1
//  int sum = 0;
//  for (int i = 0; i <= (n-2); i++)
//    for (int j = 0; j <= (n-1); j++)
//      sum++;
//  return sum;
  // Cách 2
//  return n*(n-1)/2;
  // Cách 3
  if (n%2 == 0)
    return n/2*(n-1);
  return (n-1)/2*n;
};

int main() {
    int n = 10;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << DemSoCap(a, n);
    return 0;
}
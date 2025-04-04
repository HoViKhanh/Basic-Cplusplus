//
// Created by ViKa on 04-04-2025.
//
#include <iostream>
#include <cmath>

using namespace std;

int main(){
  float r;
  cout << "Nhập bán kính đường tròn (r): " << endl;
  cin >> r;
  float S = M_PI*pow(r,2);
  cout << "Diện tích của đường tròn là: " << S << endl;
  return 0;
}
//
// Created by ViKa on 4/14/2025.
//
#include <iostream>

using namespace std;

class A {
public:
    virtual void Skeychy(){
        cout<<"\nA's Skeychy()";
        Skeychy(-1);
    }
    virtual void Skeychy(int num){
        cout<<"\nA's Skeychy("<<num<<")";
    }
};
class B:public A {
public:
    void Skeychy(){
        cout<<"\nB's Skeychy()";
        Skeychy(-2);
    }
    void Skeychy(int num){
        cout<<"\nB's Skeychy("<<num<<")";
    }
};
class C:public B {
public:
    void Skeychy(int num){
        cout<<"\nC's Skeychy("<<num<<")";
    }
};
void Curious(A* wacky){
    wacky->Skeychy();
    ((C*)wacky)->Skeychy(123);
};
int main() {
    A* inky = new B;
    inky->Skeychy();
    inky->Skeychy(23);
    Curious(inky);

    B* pinky = new C;
    pinky->Skeychy();
    pinky->Skeychy(46);
    Curious(pinky);
    return 0;
}
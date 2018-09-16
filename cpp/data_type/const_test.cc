#include<iostream>
using namespace std;
struct A{
    int a = 0;
    void set_a(int a = 100){
        this->a = a;
    }
};
int main(){
    const int a = 0;
    // int &b = a; // error
    auto &b = a; //warning only
    // b = 10; // error
    // cout << a << endl; //0

    const A a_obj;
    // a_obj.set_a(1000);
    // a_obj.a = 1000;
    A b_obj = a_obj;
    b_obj.a = 10;
    cout << b_obj.a << endl;

    auto &c_obj = a_obj;//保持底层const
    c_obj.set_a(100);
}
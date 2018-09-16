#include<iostream>

using namespace std;

int main(){
    int a = 0;
    int &b = a;
    auto c = b; //auto只推断基本数据类型， 不包含引用， 所以 c为int。
    auto &d = b;
    c = 10;
    cout << a << endl;
    d = 11;
    cout << a << endl;
    decltype(b) e = b; //因为b是引用， 所以e也是引用
    e = 10000;
    cout << a << endl;
}
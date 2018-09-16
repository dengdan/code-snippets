#include<iostream>
using namespace std;

int foo(int &a, int b, int c){
    a += b;
    return a + b + c;
}
int main(){
    int a = 0;
    auto foo2 = bind(foo, ref(a), std::placeholders::_1, std::placeholders::_2);//引用要用ref
    cout << foo2(2, 4) << ", a = " << a << endl;;
}


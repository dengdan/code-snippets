#include<iostream>
using namespace std;

int foo(int a){
    return a*a;
}
int goo(int b){
    return b*2;
}

int main(){
    int (*f)(int) = &foo;
    int (*g)(int) = goo;
    cout << f(3) << endl;
    cout << g(4) << endl;
}
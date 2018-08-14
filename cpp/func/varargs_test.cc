#include<iostream>
#include<string>
#include<initializer_list>
using namespace std;
//可变形参

void foo(initializer_list<int> args){
    for(auto arg : args){
        cout << arg << ", ";
    }
    cout << endl;
}
void foo(int argc, ...){
    va_list args;  //声明一个va_list变量
	va_start(args, argc);  //第二个参数表示形参的个数
    for(int i = 0; i < argc; i++){
        cout << va_arg(args, int) << ", ";
    }
    cout << endl;
}
int main(){
    foo({1, 2, 3});
    foo({3,  4});
    foo(3, 3, 5, 8);
}
#include<iostream>
using namespace std;

int foo(int num){
    for(int i = 0; i < num; i++){
        return i;
    }
}

int main(){
    cout << foo(1) << endl;
    cout << foo(0) << endl;
}
#include<string>
#include<iostream>
using namespace std;

// string &foo(int a){//with error
string foo(int a){//works fine
    string str("bbb");
    if(a){
        return "a";
    }else{
        return str;
    }
}

int main(){
    cout << foo(2) << endl;
    cout << foo(0) << endl;
}
#include<iostream>
#include<string>
using namespace std;

int main(){
    auto fn = hash<string>();
    cout << fn("hello") << endl;
    cout << fn("helle") << endl;
}
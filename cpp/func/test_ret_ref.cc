#include<iostream>
#include<string>
using namespace std;

char& get_char(string &str, int i){
    return str[i];
}

int main(){
    string str("abc");
    cout << str << endl;
    get_char(str, 0) = 'b';
    cout << str << endl;
}
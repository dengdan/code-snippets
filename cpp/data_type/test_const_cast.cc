#include<string>
#include<iostream>

using namespace std;

const string& ShorterString(const string &str1, const string &str2){
    return str1.size() < str2.size() ? str1 : str2;
}

string& ShorterString(string &str1, string str2){
    const string& str = ShorterString(const_cast<const string&>(str1), const_cast<const string&>(str2));
    return const_cast<string&>(str);
}

int main(){
    string str1 = "hello";
    string str2 = "how are you";
    string& str = ShorterString(str1, str2);
    cout << str << endl;
}
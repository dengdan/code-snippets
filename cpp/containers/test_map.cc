#include<map>
#include<iostream>
#include<string>
using namespace std;

int main(){
    map<string, int> dict {
        {"hello", 1}, 
        {"how", 2}
    };
    cout << dict["hello"] << endl;

    string str("abcdefaaa");
    map<char, int> char_count;
    for(auto c : str){
        // auto ret = char_count.insert({c, 1});//ret: pair(bool：是否插入, iterator：指向map的pair)
        // if(!ret.second){
        //     ++ret.first->second;
        // }
        char_count[c]++;
    }
    for(auto p : char_count){
        cout << p.first << ":" << p.second << endl;
    }
}

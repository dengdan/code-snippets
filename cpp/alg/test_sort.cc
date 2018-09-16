#include<algorithm>
#include<vector>
#include<iostream>
#include<string>
using namespace std;

bool IsShorter(const string &str1, const string &str2){
    return str1.size() < str2.size();
}
int main(){
    vector<string> list{"one", "on", "need"};
    sort(list.begin(), list.end(), IsShorter);
    for(auto s: list){
        cout << s << endl;
    }
}

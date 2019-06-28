#include<unordered_map>
#include<string>
#include<iostream>
using namespace std;

int main() {
    unordered_map<string, int> m;
    for(auto kv : m) {
        cout << kv.first << "lll" << endl;
    }
    cout << m.count("hello") << endl;
}

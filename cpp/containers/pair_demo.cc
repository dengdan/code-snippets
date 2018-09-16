#include<utility>
#include<iostream>
using namespace std;

int main(){
    pair<int, int> p(1, 2);
    cout << p.first << ", " << p.second << endl;

    auto p2 = make_pair(3, 4);
    cout << p2.first << ", " << p2.second << endl;
}
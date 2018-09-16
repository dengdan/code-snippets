#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> list;
    auto it = back_inserter(list);
    cout << list.size() << endl;
    *it = 10;
    cout << list.size() << endl;
    *it = 1;
    cout << list.size() << endl;
    for(auto i : list){
        cout << i << ", ";
    }
    cout << endl;
}

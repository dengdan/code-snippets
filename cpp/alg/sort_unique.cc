#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string> list{"the", "greate", "wall", "is", "the", "wealth", "of", "Chinese", "people"};
    sort(list.begin(), list.end());
    auto unique_end = unique(list.begin(), list.end());
    for(auto it = list.begin(); it != unique_end; it++){
        cout << *it << endl;
    }
}

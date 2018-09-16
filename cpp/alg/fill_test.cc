#include<algorithm>
#include<iostream>
using namespace std;

int main(){
    vector<int> list(10, 10);
    fill(list.begin(), list.begin() + 4, 0);
    for(auto i : list){
        cout << i << ", ";
    }
    cout << endl;
    cout << accumulate(list.begin(), list.end(), 0);
    cout << endl;
}

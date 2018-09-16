#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> list1, list2, list3;
    fill_n(back_inserter(list1), 10, 4);
    copy(list1.begin(), list1.end(), back_inserter(list2));
    replace(list1.begin(), list1.end(), 4, 5);
    replace_copy(list2.begin(), list2.end(), back_inserter(list3), 4, 10);
    for(auto i : list1){
        cout << i << ", ";
    }
    cout << endl;
    
    for(auto i : list2){
        cout << i << ", ";
    }
    cout << endl;

    for(auto i : list3){
        cout << i << ", ";
    }
    cout << endl;

}

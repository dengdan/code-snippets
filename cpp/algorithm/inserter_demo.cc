#include<algorithm>
#include<iostream>
#include<vector>
#include<list>
using namespace std;

void print_vector(vector<int> list){
    for(auto i : list){
        cout << i << ", ";
    }
    cout << endl;
}
void print_vector(list<int> list){
    for(auto i : list){
        cout << i << ", ";
    }
    cout << endl;
}

int main(){
    vector<int> list1{1, 2, 3, 4};
    list<int> list2, list3, list4;
    copy(list1.cbegin(), list1.cend(), inserter(list2, list2.begin()));
    copy(list1.cbegin(), list1.cend(), back_inserter(list3));
    copy(list1.cbegin(), list1.cend(), front_inserter(list4));
    print_vector(list1);
    print_vector(list2);
    print_vector(list3);
    print_vector(list4);
}


#include<vector>
#include<iostream>
using namespace std;
vector<int> foo(int i){
    cout << "i = " << i << endl;
    if(i){
        return vector<int>(2, i);
    }else{
        return {};
    }
}

void Print(vector<int>& list){
    cout << "list.size = " << list.size() << endl;
    for(auto v:list){
        cout << v << endl;
    }
}
int main(){
    auto a = foo(0);
    Print(a);
    auto b = foo(3);
    Print(b);
}
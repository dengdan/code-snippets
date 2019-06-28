#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    vector<size_t> list{9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    size_t t = 1;
    cout << (find(list.begin(), list.end(), t) != list.end()) << endl;
}

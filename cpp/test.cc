#include<iostream>
#include<vector>
using namespace std;
int main(){
    std::vector<int> a {1, 2, 3};
    std::vector<int> b = a;
    b.push_back(4);
    cout << a.size() << endl;
    cout << b.size() << endl;
}

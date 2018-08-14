#include<set>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> ivec;
    for(int i = 0; i < 10; i++){
        ivec.push_back(i);
        ivec.push_back(i);
    }
    multiset<int> mset(ivec.begin(), ivec.end());
    cout << mset.size() << endl;
}
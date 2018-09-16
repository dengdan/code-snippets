#include<algorithm>
#include<string>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums{1, 2, 3};
    vector<string> strs{"abc", "efg"};
    cout << accumulate(nums.begin(), nums.end(), 0) << endl; //容器元素的类型必须与第三个参数的类型一致
    cout << accumulate(strs.begin(), strs.end(), string("")) << endl;
}

#include<queue>
#include<vector>
#include<iostream>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> heap;
    vector<int> arr{1, 6, 5, 8};
    for(auto i : arr) {
        heap.push(i);
    }
    while(!heap.empty()) {
        cout << heap.top() << endl;
        heap.pop();
    }
}

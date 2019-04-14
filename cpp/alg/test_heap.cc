#include <iostream>
#include <vector>
#include "heap.h"
using namespace std;

int main() {
    vector<double> arr{0.3, .1, .9, .5, -.6};
    HeapSort<double> heap;
    for(auto i : arr) {
        heap.Insert(i);
    }
    while(!heap.Empty()) {
        cout << heap.Pop() << endl;
    }
}

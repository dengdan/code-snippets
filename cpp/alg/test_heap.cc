#include <iosteam>
#include <vector>
#include "heap.h"
using namespace std;

int main() {
    vector<int> arr{3, 1. 9};
    HeapSort heap;
    for(int i : arr) {
        heap.Insert(i);
    }
    while(!heap.Empty()) {
        cout << heap.Pop() << endl;
    }
}

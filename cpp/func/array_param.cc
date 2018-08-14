#include<iostream>
using namespace std;

void test_array(int * arr){
    cout << "test_array(int * arr)" << endl;
}

// void test_array(int arr[]){ // the same
//     cout << "test_array(int * arr)" << endl;
// }
void print_array(int* begin, int* end){
    while(begin != end){
        cout << *begin++ << ",";
    }
    cout << endl;
}
int main(){
    int arr[] = {1, 2, 3};
    test_array(arr);
    int a = 0;
    test_array(&a);

    print_array(arr, arr + 3);
    print_array(begin(arr), end(arr));// begin and end are std methods.
}
#include<iostream>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void swap(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}

int main(){
    int a = 0, b = 1;
    std::cout << "before swap, a = " << a << ", b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "after swap, a = " << a << ", b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "after swap swap, a = " << a << ", b = " << b << std::endl;
}
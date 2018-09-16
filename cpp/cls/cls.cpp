#include<iostream>
#include "cls.h"
using namespace std;
A::A(int a, int b)
{
    cout << a << ", " << b << endl;
}

int main()
{
    A(1, 2);
}

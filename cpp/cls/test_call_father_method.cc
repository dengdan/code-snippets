#include <iostream>
using namespace std;

class A{
    public:
    int a = 100;
    virtual void fn(){
        cout << "fn from A, a = " << this->a << endl;
    }
};

class B:A{
    public:
    int a = 200;
    void fn()override{
        A::fn();
        cout << "fn from B, a = " << a << endl;
    }
};

int main(){
    B b;
    b.fn();
}

#include<iostream>
using namespace std;

class Y;
class X{
    mutable int count_ = 0;
public:
    X* x;
    Y* y;
    void print() const;
};

class Y{
public:
    X* x;
};

void X::print() const{
    cout << "this is " << ++count_ << endl;
}

int main(){
    X x;
    Y y;
    x.y = &y;
    y.x = &x;
    x.x = &x;
    x.print();
    x.x->print();
    x.y->x->print();
}

#include<iostream>
#include<vector>
using namespace std;

class Object{
private:
    mutable int count_ = 0;

public:
    void print()const;
};

void Object::print()const{
    cout << count_++ << endl;//const function can modify mutable variables
}

int main(){
    Object obj;
    obj.print();
    obj.print();
}
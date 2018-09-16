#include<iostream>
#include<string>
using namespace std;

class Object{
public:
    typedef string::size_type Size;
    using Integer = int;
    void print();
private:
    Integer idx_ = 0;
    Size size = 2;
};

void Object::print(){
    cout << idx_ << ", " << size << endl;
}

int main(){
    Object obj;
    obj.print();
    Object::Size size = 2;
    cout << size << endl;
}
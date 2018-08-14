#include<iostream>
using namespace std;

struct Object{
    int a = 1;
    Object& Assign(Object& obj);
};

Object& Object::Assign(Object& obj){
    this->a += obj.a;
    return *this;
}
int main(){
    Object a, b;
    Object& c = a.Assign(b);
    c.a++;
    cout << a.a << endl;
    cout << c.a << endl;
}
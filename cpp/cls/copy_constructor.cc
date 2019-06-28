#include<iostream>
using namespace std;

class Object{
    public:
        int a;
        Object(){}
        Object(const Object&obj){
            a = obj.a;
            cout << "\tcopy constructor" << endl;
        }

};

void goo(Object obj){

}
Object foo(){
    Object obj;
    obj.a = 1000;
    return obj;
}

int main(){
    Object obj;
    cout << "copy initialzartion:" << endl;
    Object obj2 = obj;
    cout << obj2.a << endl;
    // passed/return as value
    cout << "value parameter:" << endl;
    goo(obj);

    cout << "returned value: "  << endl;
    Object obj3 = foo();
    cout << obj3.a << endl;
}

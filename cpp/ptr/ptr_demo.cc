#include<iostream>
using namespace std;

struct Object{
    int a;
    ~Object(){
        cout << "delete object" << endl;
    }
};

void del(Object* obj){
    cout << "delete object in del" << endl;
}
shared_ptr<Object> foo(){
    auto fn = [](Object* obj){
        cout << "delete in fn" << endl;
    };
    return shared_ptr<Object>(new Object, fn);
}
unique_ptr<Object, decltype(del)* > goo(){
    return unique_ptr<Object, decltype(del)* >(new Object, del);
}
int main(){
   // auto p = shared_ptr<Object>(new Object);
    auto p = foo();
    cout << p->a << endl;
    Object* objptr(new Object);
    auto q = make_shared<Object>();
    cout << q->a << endl;

    //auto up = unique_ptr<Object>(new Object);
    auto up = goo();
    cout << up->a << endl;

}

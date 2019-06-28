#include <iostream>
using namespace std;

class Object {
    public:
        int a = 0;
};

Object* const get(Object& a) {
    return &a;
}
int main() {
    Object a;
    Object* const ptr = get(a);
    Object b;
    ptr = &b;
    ptr->a = 100;
    cout << a.a << endl;
}

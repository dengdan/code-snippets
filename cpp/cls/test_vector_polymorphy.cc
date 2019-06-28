#include<iostream>
#include<vector>
using namespace std;

class A {
    public:
    virtual void print() {
        cout << "A" << endl;
    }
};
class B : public A{
    public:
    void print() override{
        cout << "B" << endl;
    }
};
int main() {
    vector<A*> list;
    B b;
    list.push_back(&b);
    list[0]->print();

}

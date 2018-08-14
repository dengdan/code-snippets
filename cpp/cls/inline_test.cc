#include<string>
#include<iostream>
using namespace std;

class Object{
private:
    int idx_;
public:
    inline void print_idx();
    Object(int idx):idx_(idx){}
};

inline void Object::print_idx(){//两个inline不会报错， 但只需要保留一个即可
    cout << idx_ << endl;
}

int main(){
    Object obj(100);
    obj.print_idx();
}
#include<iostream>
#include<string>
using namespace std;

class M{
    public:
    M()=default;
    ~M(){
        cout << "deleting M" << endl;
    }
};
class Object{
public:
    Object()=default;
    Object(string name):name(name), m(){
    }
    string name;
    M m;
    ~Object(){
        cout << "deleting object " << name << endl;
        cout << "the real delete operation is done after this function." << endl;
    }
};

int main(){
    Object obj1("obj1");
}

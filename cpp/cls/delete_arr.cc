#include <iostream>
using namespace std;

class Object{
public:
    Object(){}
    ~Object(){
        cout << "destroying object" << endl;
    }
};

class Test{
    Object* obj_arr;
public:
    Test(){
        obj_arr = new Object[3];
    }
    ~Test(){
        delete []obj_arr;
    }
};

int main()
{
    Test();
}

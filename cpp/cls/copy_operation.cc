#include<iostream>
using namespace std;

class Object{
    public:
        int a;
        Object()=default;
        Object& operator=(const Object& obj){
            cout << "\toperator =" << endl;
            this->a = obj.a;;
            return *this;
        }

        Object(const Object& obj){
            cout << "\tcopy constructor"<< endl;
            a = obj.a;
        }
        ~Object(){
            cout << "delete object" << endl;
        }
};

int main(){
    Object obj1, obj2;
    obj1.a = 1;
    cout << "copy operator: " << endl;
    obj2 = obj1;
    cout << "copy constructor:" << endl;
    Object obj3 = obj2;
}

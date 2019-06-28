#include<iostream>
using namespace std;
class Object{
    int a ;
    Object& operator=(const Object&)=delete;
};

int main(){
    Object obj1, obj2;
    //obj2 = obj1;//will cause compile error
    Object obj3(obj1);
}

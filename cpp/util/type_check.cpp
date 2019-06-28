#include<type_traits>
#include<iostream>
using namespace std;

class Object{
    int a;
};

int main(){
    Object obj;
    int a = 0;
    cout << std::is_object<Object>::value << endl;
}

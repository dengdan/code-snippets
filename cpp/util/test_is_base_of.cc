#include<type_traits>
#include<iostream>

class Object{
    int a;
};
int main(){
    std::cout << std::is_base_of<Object, Object>::value << std::endl;
}

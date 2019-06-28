#include<iostream>
#include<string>
using namespace std;

class Object{
    public:
        string str = "hello";

    const char& operator[](const std::size_t loc)const{
        cout << "in const get" << endl;
        return str[loc];
    }

    char& operator[](const std::size_t loc){
        cout << "in non-const get" << endl;
        return const_cast<char&>(
                static_cast<const Object&>(*this)[loc]
                );
    }
};

int main(){
    Object obj;
    cout << "before get: " << obj.str << endl;
    char& a = obj[2];
    a = '3';
    cout << "after get: " << obj.str << endl;

}

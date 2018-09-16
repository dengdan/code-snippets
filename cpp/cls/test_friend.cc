#include<iostream>
#include<string>
using namespace std;

class Object{
friend void print_id(Object& obj);//类内声明友元函数
private:
    int id_;
public:
    string name;
    Object(int id, string name);
};

Object::Object(int id, string name):
    id_(id), name(name){}

void print_id(Object& obj);//类外若要访问， 需要另外声明
int main(){
    Object obj(100, "object");
    print_id(obj);
}
void print_id(Object& obj){
    cout << obj.id_ << endl;
}

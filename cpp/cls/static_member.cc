#include<iostream>
using namespace std;

class Object{
public:
    static const int count = 100;
    static int count2;//非const不能初始化
};

int Object::count2 = 0;

int main(){
    cout << Object::count << endl;
}

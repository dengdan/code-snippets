#include<vector>
#include<iostream>
using namespace std;

class Object{
    public:
    int a = 10;
    Object() = default;
    Object(const Object& obj){
        cout << "copy happend" << endl;
        a = obj.a;
    }
};
int main(){
    vector<Object> v1, v2;
    Object obj;
    v1.push_back(obj);
    obj.a = 2000;
    cout << v1[0].a << endl;
    v2 = v1;
    v1[0].a = 1000;
    cout << v2[0].a << endl;
}

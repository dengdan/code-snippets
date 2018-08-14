#include<map>
#include<iostream>
#include<string>
using namespace std;

class Object{
public:
    string name;
    size_t hasher(){
        return hash<string>()(name);
    }
};

bool equal(const Object &obj1, const Object& obj2){
    return obj1.hasher() == obj2.hasher();
}

int main(){
    Object obj1, obj2;
    obj1.name = "object1";
    obj2.name = "object2";

    unordered_map<Object, int, decltype(equal)*> > dict;
    dict[obj1] = 1;
    dict[obj2] = 2;
    for(auto it : dict){
        cout << it.first.name << dict[it.first] << endl;
    }
}
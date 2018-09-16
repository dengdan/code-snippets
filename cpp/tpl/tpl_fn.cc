#include<iostream>
#include<vector>
#include<set>
using namespace std;

template <typename T> 
void print(T iterable){
    for(auto item : iterable){
        cout << item << ", ";
    }
    cout << endl;
}


template<typename T=double>//double为默认模板参数
class Tracker{
    public:
    vector<T> objects_;
    void add_object(T obj){
        objects_.push_back(obj);
    }
    
    template<typename T2>
    void tpl_fn(T2 t){
        cout << t << endl;
    }
};


int main(){
    vector<int> arr1{1, 2, 3};
    set<int> set1{14, 5, 6};
    print(arr1);
    print(set1);
    
    Tracker<int> tracker;
    tracker.add_object(100);
    print(tracker.objects_);
    
    Tracker<> tracker2;//<>不可少
    tracker2.add_object(3);
    print(tracker2.objects_);
    
    tracker2.tpl_fn("hello");
}

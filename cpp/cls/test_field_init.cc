#include<iostream>
#include<vector>
using namespace std;

class Object{
private:
    vector<int> counts_{0};
    vector<int> counts2_ = {0};
    int count_ = 0;
    int count2_{0};

public:
    void print()const;
};

void Object::print()const{
    cout << count_ << endl;
    cout << counts_.size() << endl;
    cout << count2_ << endl;
    cout << counts2_.size() << endl;

}

int main(){
    Object obj;
    obj.print();
}
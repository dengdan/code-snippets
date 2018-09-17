#include<iostream>
using namespace std;

template <typename T1, typename T2>
class Distance {
public:
    virtual double get(const T1& t1, const T2& t2) {
        return t1.v - t2.v;
    }
};

class A{
public:
    int v = 3;
};

class B{
public:
    int v = 30;
};
typedef Distance<A, B> ABDistance;
class SDistance : public Distance<A, B> {
public:
    double get(const A& a, const B& b){
        return a.v * a.v - b.v * b.v;
    }
};

int main() {
    ABDistance distance;
    SDistance sd;
    A a;
    B b;
    cout << distance.get(a, b) << endl;
    cout << sd.get(a, b) << endl;
}

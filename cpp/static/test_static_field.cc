#include <iostream>
using namespace std;

class A {
public:
    void p() {
        static int a = 1;
        cout << ++a << endl;
    }
};

int main() {
    A a, b;
    a.p();
    a.p();
    b.p();
    b.p();
}

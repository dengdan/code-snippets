#include<iostream>
using namespace std;
struct A{
    int a = 0;
};
/**
 * 星号如果在const右边， 则指针指向的对象为const， 即底层const
 * 否则为顶层const
 */

void foo(const A* a){
    cout << a->a;
}
void foo(A* a){
    cout << a->a;
}
// void foo(A* const a){//redefinition of foo(A* a). 顶层const在重载时会被忽略
//     cout << a->a;
// }
void foo(A a){
    cout << a.a;
}
// void foo(const A a){//按值传递的参数const也被忽略
//     cout << a.a;
// }

void foo(const A& a){

}
// void foo(const A &a){

// }
int main(){
    A a;
    const A* b = &a;
    A* const c = &a;
    A const *d = &a;
    // b->a = 100;//error
    c->a = 1000;
    // d->a = 10000;//error
}
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    auto f = [](){
        return 778;
    };
    cout << f() << endl;
    
    auto f2 = [](int a, int b){
        return a*a + b*b;
    };
    
    cout << f2(3, 4) << endl;
    
    int local_var = 200;
    
    //值捕获， 只读
    auto f3 = [local_var](int a){
        return local_var + a;
    };
    
    cout << f3(20) << endl;
    
    //引用捕获， 可写
    auto f4 = [&local_var](int a){
        local_var += a;//local var is read only here;
        return local_var;
    };
    cout << f4(21) << endl;

    //隐式捕获
    int local_var2 = 2, local_var3 = 3;
    auto f5 = [&](){
        local_var2 ++;
        return local_var2 + local_var3;
    };
    
    cout << f5() << endl;
    
    //指定返回类型
    vector<int> list(2, 0);
    transform(list.begin(), list.end(), list.begin(), 
        [](int i){ return i > 0? i : i + 1;} //只有return时， 不需要指定
    );
    
    for (auto i : list){
        cout << i << ", ";
    }
    
    cout << endl;

    transform(list.begin(), list.end(), list.begin(), 
        [](int i)->int{ //-> 指定返回类型
            if(i > 0) return i - 10;//只有return时， 好像还是不需要指定
            else return i;   
        }
    );
    
    for (auto i : list){
        cout << i << ", ";
    }
    
    cout << endl;
    
}

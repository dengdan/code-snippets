#include<vector>
using namespace std;

int acc(vector<float> v)
{
    int len = v.size();
    float sum = 0;
    for(int i = 0; i < len; i++){
        sum += v[i];
    }
    
    return sum;
}

int acc_int(int a)
{
    return a*a;
}

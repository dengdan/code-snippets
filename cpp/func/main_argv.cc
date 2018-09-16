#include<string>
#include<sstream>
#include<iostream>
using namespace std;

int main(int argc, char ** argv){
    stringstream ss;
    for(int i = 0; i < argc; i++){
        ss << argv[i] << ",";
    }
    cout << ss.str() << endl;
}
#include<fstream>

int main(){
    std::ofstream out("/Users/dengdan/temp/no-use/test_out.txt");
    for(int i = 0; i < 10; i++){
        out << i << std::endl;
    }
}
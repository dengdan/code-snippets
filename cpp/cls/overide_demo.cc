// override关键字用于减少coding的bug
class Abc{
    virtual void fn(int);
};

class B:Abc{
    void fn(int) override;//强制检查是否override
};

int main(){

}

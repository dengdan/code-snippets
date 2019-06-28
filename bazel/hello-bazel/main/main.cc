#include "main/hello.h"
#include "lib/hello_lib.h"

int main() {
    std::string name = GetName();
    Hello(name);
}

#include "iostream"
#include "string"
#include "file1.h"

using namespace std;
int main()
{
	extern string a_is_global;
	cout << a_is_global << endl;
	cout << ns_global::hb() << endl;
}


#include<string>
#include"file1.h"

using namespace std;

string a_is_global = "I am a global string";

namespace ns_global{
	string b =  "I am b, and can be visited via my namespace";

	string hb()
		{
			return b;
		}
	}

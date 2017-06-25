#include<iostream>
#include<string>
#include<vector>
#include<climits>
#include<cassert>
using namespace std;
class Solution {
public:
	bool match_char(char cs, char cp)
	{
		if(cp == '.')
		{
			return true;
		}
		return cs == cp;
	}
    bool isMatch(string s, string p)
    {
    	//init dp
    	vector<vector<bool> >dp(s.size() + 1, vector<bool>(p.size() + 1, false));
    	dp[0][0] = true;
    	for(int j = 1; j <= p.size(); j++)
    	{
    		char cp = p[j - 1];
    		if(cp == '*')
    		{
    			assert(j >= 2);
    			dp[0][j] = dp[0][j - 2];
    		}
    	}

    	// dp process
    	for(int i = 1; i <= s.size(); i++)
    	{
    		char cs = s[i - 1];
    		for(int j = 1; j <= p.size(); j++)
    		{
    			char cp = p[j - 1];
    			if(cp != '*')
    			{
    				dp[i][j] = dp[i - 1][j - 1] && match_char(cs, cp);
    			}else{
    				dp[i][j] = dp[i][j - 2] || dp[i][j - 1] || dp[i - 1][j]&& match_char(cs, p[j -2]);
    			}
    		}
    	}

    	//get result
    	return dp[s.size()][p.size()];

    }
};


class Case{
public:
	string str;
	string pattern;
	bool match;
	Case(string str, string pattern, bool match){
		this->str = str;
		this->pattern = pattern;
		this->match = match;
	}
};
int main()
{
	Solution solution;
	vector<Case> cases;
	cases.push_back(Case("aab", "c*a*b", true));
	cases.push_back(Case("aaa", "a*", true));
	cases.push_back(Case("abc","a.*", true));
	cases.push_back(Case("aaa","a*a", true));
	cases.push_back(Case("aaa","a.a", true));
	cases.push_back(Case("aa","a", false));
	cases.push_back(Case("aa", "aa", true));
	cases.push_back(Case("aaa", "aa", false));
	cases.push_back(Case("aa", ".*", true));
	cases.push_back(Case("ab", ".*", true));

	for(int i = 0; i < cases.size(); i++)
	{
		Case c = cases[i];
		if (c.match != solution.isMatch(c.str, c.pattern)){
			cout << "Wrong Answer:" << "str = " << c.str << ", pattern = " << c.pattern << ", expected " << c.match << endl;
		}else{
			cout << c.str << "," << c.pattern << ", " << c.match << endl;
		}
	}
}

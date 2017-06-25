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
		if(cp == '?')
		{
			return true;
		}
		return cs == cp;
	}
    bool isMatch(string s, string p)
    {
    	//init dp
    	vector<vector<bool> >dp(p.size() + 1, vector<bool>(s.size() + 1, false));
    	dp[0][0] = true;
    	for(int i = 1; i <= p.size(); i++)
    	{
    		if(p[i - 1] == '*')
    		{
    			dp[i][0] = dp[i - 1][0];
    		}
    	}

    	//dp
    	for(int i = 1; i <= p.size(); i++)
    	{
    		char cp = p[i - 1];
    		for(int j = 1; j <= s.size(); j++)
    		{
    			char cs = s[j - 1];
    			if(cp != '*')
    			{
    				dp[i][j] = dp[i - 1][j - 1] && match_char(cs, cp);
    			}else{
    				// a star can match 0 char, 1 char, or more than 1 chars
    				dp[i][j] = dp[i - 1][j] || dp[i - 1][j - 1] || dp[i][j - 1];
    			}
    		}
    	}

    	//get result
    	return dp[p.size()][s.size()];

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
	cases.push_back(Case("aa", "a", false));
	cases.push_back(Case("aa", "aa", true));
	cases.push_back(Case("aaa","aa", false));
	cases.push_back(Case("aa","*a", true));
	cases.push_back(Case("aa","a*", true));
	cases.push_back(Case("ab","?*", true));
	cases.push_back(Case("aab", "c*a*b", false));

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

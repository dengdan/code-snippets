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
    	// init status
    	vector<vector<bool> >dp(p.size() + 1, vector<bool>(s.size() + 1, false));
    	dp[0][0] = true;

    	for(int i = 1; i <= p.size(); i++)
    	{
    		char cp = p[i - 1];
    		if(cp != '*')
    		{
    			dp[i][0] = false;
    		}else{
    			assert(i - 2 >= 0);
    			dp[i][0] = dp[i - 2][0];
    		}
    	}

    	//dp process
    	for(int i = 1; i <= p.size(); i++)
    	{
    		char cp = p[i - 1];
    		for(int j = 1; j <= s.size(); j++)
    		{
    			char cs = s[j - 1];
    			bool result = false;

    			if(cp != '*')
    			{
    				result = dp[i - 1][j - 1] && match_char(cs, cp);
    			}else{
    				result = dp[i - 2][j];
    				if(!result)
    				{
    					char pre_cp = p[i - 2];
    					for(int k = j; k >= 1 && match_char(s[k - 1], pre_cp); k--)
    					{
    						if(dp[i - 1][k])
    						{
    							result = true;
    							break;
    						}
    					}
    				}
    			}

    			dp[i][j] = result;
    		}
    	}

    	for(int i = 0; i < dp.size(); i++)
    	{
    		for(int j = 0; j < dp[0].size(); j++)
    		{
    			cout << dp[i][j] << '\t';
    		}
    		cout << endl;
    	}
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

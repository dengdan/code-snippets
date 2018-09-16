#include<iostream>
#include<string>
#include<vector>
#include<climits>
#include<cassert>
#include<stack>
using namespace std;
class Solution {
public:
	/**
	 * status value dp[i][j]: how many paths to point(i, j)
	 * transform condition:
	 *   (i, j) can be reached from two positions:(i - 1, j), (i, j - 1)
	 * 		d[i][j] = d[i - 1][j] + d[i][j - 1]
	 */
    int uniquePaths(int m, int n) {
    	vector<vector<int> > dp(m + 1, vector<int>(n + 1, 0));
    	for(int i = 1; i <= m; i++)
    	{
    		dp[i][1] = 1;
    	}
    	for(int j = 1; j <= n; j++)
    	{
    		dp[1][j] = 1;
    	}
    	for(int i = 2; i <= m; i++)
    	{
    		for(int j = 2; j <= n; j++)
    		{
    			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
    		}
    	}
    	return dp[m][n];
    }
};
class Case{
public:
	int m, n, ans;
	Case(int m, int n, int ans){
		this->m = m;
		this->n = n;
		this->ans = ans;
	}
	void test()
	{
		Solution s;
		int ans = s.uniquePaths(this->m, this->n);
		cout << this->m << "," << this->n << "," << this->ans;
		if (this->ans != ans)
		{
			cout << "Wrong:" << ans;
		}else{
			cout << "Right.";
		}
		cout << endl;
	}
};

int main()
{
	Solution solution;
	vector<Case> cases;
	cases.push_back(Case(2, 2, 2));
	cases.push_back(Case(3, 7, 28));
	for (int i = 0; i < cases.size(); i++)
	{
		cases[i].test();
	}
}

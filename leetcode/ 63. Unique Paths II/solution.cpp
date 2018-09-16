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
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
    	int m = grid.size();
    	if(m == 0) return 0;
    	int n = grid[0].size();
    	vector<vector<int> > dp (m, vector<int>(n, 0));
    	dp[0][0] = 1;
    	for(int i = 1; i < m; i++)
    	{
    		if(grid[i][0] == 0)
    		{
    			dp[i][0] = dp[i - 1][0];
    		}
    	}
    	for(int i = 0; i < m; i++)
    	{
    		for(int j = 1; j < n; j++)
    		{
    			if(grid[i][j] == 0)
    			{
    				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
    			}
    		}
    	}

    	return dp[m - 1][n - 1];
    }
};


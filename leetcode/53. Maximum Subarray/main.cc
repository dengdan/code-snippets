#include <vector>
#include <iostream>
#include <limits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int max_sum = nums[0];
      int sum = 0;
      for (int i = 0 ; i < nums.size(); ++i) {
        sum = max(nums[i] + sum, nums[i]);
        max_sum = max(max_sum, sum);
//        cout << " i = "  << i << ", nums[i] = " << nums[i] << ", state = " << sum << endl;
      }
      return max_sum;
    }
};

int main() {
  Solution sol;
  vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
  int expect = 6;
  int ans = sol.maxSubArray(nums);
  if (ans != expect) {
    cout << "Wrong ans = " << ans << ", expect = " << expect << endl;
  } else {
    cout << "Yes, u r right!" << endl;
  }
}

https://leetcode.com/problems/maximum-subarray/

Input: a vector of int
Output: find a contiguous subarray with the largest sum, return it.

It's a problem in dp

state:
the max sum so far containing this element

transfer:
max(state[i - 1] + num[i], num[i])

state[0] = 0
state[1] = num[0]
state[2] = max[state[1] + num[1], num[1]

Only nedd two vars to store the state

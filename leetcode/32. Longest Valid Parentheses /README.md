[32. Longest Valid Parentheses ](https://leetcode.com/problems/longest-valid-parentheses/#/description)

It's not hard to find a naive solution to this problem with DFS, but it will result in TIME_EXCEEDED, as in solution1.
An efficient O(n) algorithm is post in the discussion forum. The most wisdom insights are:
1. put invalid index into stack when looping the string
2. after a loop, the largest index gap stands for the longest valid substring.

Special cases can be well dealt with by push -1 and str.size() before and after looping.

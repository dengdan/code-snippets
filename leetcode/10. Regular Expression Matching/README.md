[10. Regular Expression Matching ](https://leetcode.com/problems/regular-expression-matching/#/description)

It's a typical dynamical programming problem. The most troublesome part is the status transferring condition.
Three versions of solutions are provided now.
Differences between them:
1. `dp[i][j]` in solution1 and 2 stands for whether `pattern[0:i]` can match `str[0:j]`; while in solution3, the order is reversed.
2. The status transfer code in solution1 is easier to understand but more time consuming.
The way solution1 takes: if i-th char in pattern is `*`, then `dp[i][j]` is decided by two factors, i.e.,  `dp[i - 2][j]` and `pattern[i - 1]`:
* If the former is true, `dp[i][j]` is sure to be true. 
* Else, the value of `dp[i][j]` depends on whether `pattern[j-1]` has matched a char or not. In solution1, this judgement is achieved by a for loop. 
The way solution2 and 3 take: a `*` can stands for 0, 1 and more than 1 repetations of the char just before this `*`:
* 0: `dp[i][j] = dp[i - 2][j]`
* 1: `dp[i][j] = dp[i - 1][j]`
* more than one: `dp[i][j] = dp[i][j - 1] && match_char(str[j - 1], pattern[i - 2])`

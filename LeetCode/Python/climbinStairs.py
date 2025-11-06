"""
Climbing Stairs
You are given an integer n representing the number of steps to reach the top of a staircase. You can climb with either 1 or 2 steps at a time.

Return the number of distinct ways to climb to the top of the staircase.

Example 1:

Input: n = 2

Output: 2
Explanation:

1 + 1 = 2
2 = 2
Example 2:

Input: n = 3

Output: 3
Explanation:

1 + 1 + 1 = 3
1 + 2 = 3
2 + 1 = 3
Constraints:

1 <= n <= 30
"""

"""
# Recursive solution - Exceeds time limit
def climbStairs(n: int) -> int:
    if n == 1 or n == 0:
        return 1

    return climbStairs(n - 1) + climbStairs(n - 2)
"""

"""
# Memoization solution
def climbStairs(n: int) -> int:
    memo = [-1] * (n + 1)
    return climbStairsRec(n, memo)

def climbStairsRec(n: int, memo):
    if n == 1 or n == 0:  # base case 
        return 1

    # has the subtree operation occurred 
    if memo[n] != -1:
        return memo[n]

    return climbStairsRec(n - 1, memo) + climbStairsRec(n - 2, memo)
"""

# Bottom-Up (Tabulation) Dynamic Programming solution
def climbStairs(n: int) -> int:
    dp = [-1] * (n + 1)
    dp[0] = 1
    dp[1] = 1

    for i in range(2, len(dp)):
        dp[i] = dp[i - 1] + dp[i - 2]

    return dp[n]


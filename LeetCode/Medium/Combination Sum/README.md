# Combination Sum

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | November 8, 2026 |
| **Tags** | Array, Backtracking |
| **Link** | [View Problem](https://leetcode.com/problems/combination-sum/) |
| **Runtime** | 1 ms |
| **Memory** | 14 MB |

## Problem Description

<p>Given an array of <strong>distinct</strong> integers <code>candidates</code> and a target integer <code>target</code>, return <em>a list of all <strong>unique combinations</strong> of </em><code>candidates</code><em> where the chosen numbers sum to </em><code>target</code><em>.</em> You may return the combinations in <strong>any order</strong>.</p>

<p>The <strong>same</strong> number may be chosen from <code>candidates</code> an <strong>unlimited number of times</strong>. Two combinations are unique if the <span data-keyword="frequency-array" class=" cursor-pointer relative text-dark-blue-s text-sm"><button type="button" aria-haspopup="dialog" aria-expanded="false" aria-controls="radix-_r_t_" data-state="closed" class="">frequency</button></span> of at least one of the chosen numbers is different.</p>

<p>The test cases are generated such that the number of unique combinations that sum up to <code>target</code> is less than <code>150</code> combinations for the given input.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> candidates = [2,3,6,7], target = 7
<strong>Output:</strong> [[2,2,3],[7]]
<strong>Explanation:</strong>
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> candidates = [2,3,5], target = 8
<strong>Output:</strong> [[2,2,2,2],[2,3,3],[3,5]]
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> candidates = [2], target = 1
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= candidates.length &lt;= 30</code></li>
	<li><code>2 &lt;= candidates[i] &lt;= 40</code></li>
	<li>All elements of <code>candidates</code> are <strong>distinct</strong>.</li>
	<li><code>1 &lt;= target &lt;= 40</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ Best and easy DP Solution
**Author**: [@18bce192](https://leetcode.com/18bce192/)
**Upvotes**: 68 👍
**Link**: [View Original Post](https://leetcode.com/problems/combination-sum/solutions/1103237/)

---

Similar idea from the problem [coin-change-2](https://leetcode.com/problems/coin-change-2/) .
it is simplest and fastest dp solution, we don\'t need to sort elements \uD83D\uDE42
```
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
		// dp vector to store all possible combinations of the target sum
        vector <vector <vector <int>>> dp(target+1);
        dp[0]={{}};
        for(int &i:nums)
        {
		// Iterating through all the elements from array nums aka candidates
            for(int j=i;j<=target;j++)
            {
			// Finding all possible ways to achieve sum j from element i
                for(auto v:dp[j-i])
                {
                    v.push_back(i);
                    dp[j].push_back(v);
                }
            }
        }
		// Finally, returning our ans \uD83D\uDE43
        return dp[target];
    }
};
```
If you liked this solution please upvote\uD83D\uDE4F if you have any query plz comment below \uD83D\uDC47

</details>

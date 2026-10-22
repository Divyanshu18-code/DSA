# Count Good Numbers

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | October 22, 2026 |
| **Tags** | Math, Recursion |
| **Link** | [View Problem](https://leetcode.com/problems/count-good-numbers/) |
| **Runtime** | 0 ms |
| **Memory** | 7.7 MB |

## Problem Description

<p>A digit string is <strong>good</strong> if the digits <strong>(0-indexed)</strong> at <strong>even</strong> indices are <strong>even</strong> and the digits at <strong>odd</strong> indices are <strong>prime</strong> (<code>2</code>, <code>3</code>, <code>5</code>, or <code>7</code>).</p>

<ul>
	<li>For example, <code>"2582"</code> is good because the digits (<code>2</code> and <code>8</code>) at even positions are even and the digits (<code>5</code> and <code>2</code>) at odd positions are prime. However, <code>"3245"</code> is <strong>not</strong> good because <code>3</code> is at an even index but is not even.</li>
</ul>

<p>Given an integer <code>n</code>, return <em>the <strong>total</strong> number of good digit strings of length </em><code>n</code>. Since the answer may be large, <strong>return it modulo </strong><code>10<sup>9</sup> + 7</code>.</p>

<p>A <strong>digit string</strong> is a string consisting of digits <code>0</code> through <code>9</code> that may contain leading zeros.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> n = 1
<strong>Output:</strong> 5
<strong>Explanation:</strong> The good numbers of length 1 are "0", "2", "4", "6", "8".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> n = 4
<strong>Output:</strong> 400
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> n = 50
<strong>Output:</strong> 564908303
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>15</sup></code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Smallest C++ CODE || Beats 100%🔥🔥 || Recursive Binary Exponentiation
**Author**: [@dcodeDV](https://leetcode.com/dcodeDV/)
**Upvotes**: 105 👍
**Link**: [View Original Post](https://leetcode.com/problems/count-good-numbers/solutions/5340950/)

---

# Intuition
1. We know that every digit can have range 0 - 9.
2. In this range there are 5 even numbers and 4 prime numbers.
3. So, for every even position we have 5 options to fill it and for every odd position we have 4 options to fill it.

# Approach
Let observe something for n = 5.
Options  : 5 4 5 4 5
Position : 0 1 2 3 4
So, our answer will be (5 x 4) x (5 x 4) x 5
This can be seen as we have 20 options for every n/2 positions if we group positions in 2.
Since we are following 0-indexing ==> last position will be even for odd n and will have 5 options.

For even n we will have perfectly n/2 groups each having 20 options.

Thus we first find out 20^(n/2). If n is odd multiply it by 5. Then return.

For calculating power we will use recursive binary exponentiation.

# Complexity
- Time complexity: $$O(log(n))$$

- Space complexity: $$O(log(n))$$

# Code
```
class Solution {
public:
    int M = 1e9+7;
    long long power(long long b, long long e, long long ans) {
        if(e == 0) return ans;
        if(e & 1) return power(b, e - 1, (ans * b) % M);
        else return power((b * b) % M, e / 2, ans);
    }
    int countGoodNumbers(long long n) {
        long long temp = power(20, n/2, 1);
        return (n & 1) ? (temp * 5) % M : temp;
    }
};
```

# PLEASE UPVOTE
![upvote_req.gif](https://assets.leetcode.com/users/images/0e7c897a-25e4-4475-aa37-e5e40bb4ce6a_1711047280.7046223.gif)

</details>

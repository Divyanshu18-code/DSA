# First Bad Version

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | November 10, 2026 |
| **Tags** | Binary Search, Interactive |
| **Link** | [View Problem](https://leetcode.com/problems/first-bad-version/) |
| **Runtime** | 0 ms |
| **Memory** | 8 MB |

## Problem Description

<p>You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.</p>

<p>Suppose you have <code>n</code> versions <code>[1, 2, ..., n]</code> and you want to find out the first bad one, which causes all the following ones to be bad.</p>

<p>You are given an API <code>bool isBadVersion(version)</code> which returns whether <code>version</code> is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.</p>

<p>&nbsp;</p>
<p><span class="float-right -my-0.5 ml-2 inline-flex select-none items-center" data-example-lang-controls=""><span role="group" class="inline-flex h-6 items-center rounded-sd-md bg-sd-muted p-0.5" data-example-lang-toggle=""><button type="button" aria-pressed="true" class="h-5 max-w-[10rem] truncate whitespace-nowrap rounded-sd-sm border px-2 text-xs font-normal leading-none border-sd-border bg-sd-background text-sd-foreground">Original</button><button type="button" aria-pressed="false" class="h-5 max-w-[10rem] truncate whitespace-nowrap rounded-sd-sm border px-2 text-xs font-normal leading-none border-transparent text-sd-muted-foreground hover:text-sd-foreground">C++</button></span></span><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> n = 5, bad = 4
<strong>Output:</strong> 4
<strong>Explanation:</strong>
call isBadVersion(3) -&gt; false
call isBadVersion(5)&nbsp;-&gt; true
call isBadVersion(4)&nbsp;-&gt; true
Then 4 is the first bad version.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> n = 1, bad = 1
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= bad &lt;= n &lt;= 2<sup>31</sup> - 1</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ - Easy - Using Binary Search
**Author**: [@nipunrathore](https://leetcode.com/nipunrathore/)
**Upvotes**: 26 👍
**Link**: [View Original Post](https://leetcode.com/problems/first-bad-version/solutions/3240775/)

---

<!-- # Intuition -->
<!-- Describe your first thoughts on how to solve this problem. -->

<!-- # Approach -->
<!-- Describe your approach to solving the problem. -->

# Complexity
- Time complexity:$$O(log n)$$
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:$$O(1)$$
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int start = 0 ; 
        long long int end = n ; 
        long long int minBadVersion ;
         
        while (start <= end)
        {
            long long int mid = (start + end) / 2 ; 

            if (isBadVersion(mid) == 1)
            {
                minBadVersion = mid ; 
                end = mid - 1 ; 
            }
            else
            {
                start = mid + 1 ; 
            }
        }
        return minBadVersion ;
    }
};
```
![815a317f-9cdf-46e2-a397-af8869dafa2e_1673498197.3721023.png](https://assets.leetcode.com/users/images/65eeb207-f2a9-4d1b-9d13-2c8573d657ed_1677603105.5077243.png)


</details>

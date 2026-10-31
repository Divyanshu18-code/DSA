# Remove Duplicates from Sorted Array II

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | October 31, 2026 |
| **Tags** | Array, Two Pointers |
| **Link** | [View Problem](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/) |
| **Runtime** | 9 ms |
| **Memory** | 19.5 MB |

## Problem Description

<p>Given an integer array <code>nums</code> sorted in <strong>non-decreasing order</strong>, remove some duplicates <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank"><strong>in-place</strong></a> such that each unique element appears <strong>at most twice</strong>. The <strong>relative order</strong> of the elements should be kept the <strong>same</strong>.</p>

<p>Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the <strong>first part</strong> of the array <code>nums</code>. More formally, if there are <code>k</code> elements after removing the duplicates, then the first <code>k</code> elements of <code>nums</code>&nbsp;should hold the final result. It does not matter what you leave beyond the first&nbsp;<code>k</code>&nbsp;elements.</p>

<p>Return <code>k</code><em> after placing the final result in the first </em><code>k</code><em> slots of </em><code>nums</code>.</p>

<p>Do <strong>not</strong> allocate extra space for another array. You must do this by <strong>modifying the input array <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in-place</a></strong> with O(1) extra memory.</p>

<p><strong>Custom Judge:</strong></p>

<p>The judge will test your solution with the following code:</p>

<pre>int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i &lt; k; i++) {
    assert nums[i] == expectedNums[i];
}
</pre>

<p>If all assertions pass, then your solution will be <strong>accepted</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,1,1,2,2,3]
<strong>Output:</strong> 5, nums = [1,1,2,2,3,_]
<strong>Explanation:</strong> Your function should return k = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [0,0,1,1,1,1,2,3,3]
<strong>Output:</strong> 7, nums = [0,0,1,1,2,3,3,_,_]
<strong>Explanation:</strong> Your function should return k = 7, with the first seven elements of nums being 0, 0, 1, 1, 2, 3 and 3 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code>nums</code> is sorted in <strong>non-decreasing</strong> order.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: 0(N) EASY TO UNDERSTAND SOLUTION
**Author**: [@2005115](https://leetcode.com/2005115/)
**Upvotes**: 533 👍
**Link**: [View Original Post](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/solutions/4062386/)

---

# **PLEASE UPVOTE MY SOLUTION IF YOU LIKE IT**
# **CONNECT WITH ME**
#### **[https://www.linkedin.com/in/pratay-nandy-9ba57b229/]()**
#### **[https://www.instagram.com/pratay_nandy/]()**
# Approach
The goal of this function is to remove duplicates from the nums vector while keeping at most two occurrences of any element. The function returns the length of the modified vector after removing duplicates.

Here\'s the approach implemented in the code:

- Initialize an integer variable i to 0. This variable will keep track of the current position in the modified nums vector.

- Use a for loop to iterate through each element ele in the nums vector using the range-based for loop.

- Inside the loop, check the following conditions:

---


1. i == 0: This condition ensures that the first element is always included in the modified vector.
2. i == 1: This condition ensures that the second element is always included in the modified vector.
3. nums[i-2] != ele: This condition checks if the current element ele is not the same as the element two positions before the current position i. This ensures that only two occurrences of any element are included in the modified vector.
---
-  If any of the above conditions are met, copy the current element ele to the nums[i] position in the modified vector, and increment i by 1 to move to the next position.


- Repeat this process for all elements in the nums vector.

- Finally, return the value of i, which represents the length of the modified vector with duplicates removed.

This approach effectively modifies the nums vector in place, removing duplicates while keeping at most two occurrences of each element. The function returns the length of the modified vector, which can be used to access the unique elements in the first i positions of the vector
<!-- Describe your approach to solving the problem. -->

# Complexity
- Time complexity:**0(N)**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:**0(1)**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
![upvote.png](https://assets.leetcode.com/users/images/91a084df-cac4-4805-8bbf-78afd5e22977_1695092464.1321526.png)


# Code
```
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0;
        // int ele= nums[0];
        for(auto ele : nums)
        {
            if(i==0 || i==1 || nums[i-2] != ele)
            {
                nums[i] = ele;
                i++;
            }
        }
    return i ;
    }
};
```

</details>

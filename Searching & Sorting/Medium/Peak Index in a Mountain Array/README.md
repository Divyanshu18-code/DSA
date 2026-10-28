# Peak Index in a Mountain Array

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | October 29, 2026 |
| **Tags** | Array, Binary Search, Ternary Search |
| **Link** | [View Problem](https://leetcode.com/problems/peak-index-in-a-mountain-array/) |
| **Runtime** | 0 ms |
| **Memory** | 63.6 MB |

## Problem Description

<p>You are given an integer <strong>mountain</strong> array <code>arr</code> of length <code>n</code> where the values increase to a <strong>peak element</strong> and then decrease.</p>

<p>Return the index of the peak element.</p>

<p>Your task is to solve it in <code>O(log(n))</code> time complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">arr = [0,1,0]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">arr = [0,2,1,0]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">arr = [0,10,5,2]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= arr.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= arr[i] &lt;= 10<sup>6</sup></code></li>
	<li><code>arr</code> is <strong>guaranteed</strong> to be a mountain array.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Easy Explained C++ Logic | 100% time
**Author**: [@Scaar](https://leetcode.com/Scaar/)
**Upvotes**: 58 👍
**Link**: [View Original Post](https://leetcode.com/problems/peak-index-in-a-mountain-array/solutions/3410006/)

---

# Intuition
-  We have to find the element which is peak in the whole array.
- So we can see that this `[0,10,5,2]` array is first `increasing` in a sorted way then starts `decreasing` which is also in a sorted way.
- So by this we can see that we have to find the element which is the maximum and it\'s also present somewhere in the `middle` of the array {because first increasing then decreasing so it has to be somewhere in the middle}.
<!-- Describe your first thoughts on how to solve this problem. -->

# Approach
- So by the intuation we can be clicked with a approach similer in which we have to find any value that is present in the middle somewhere, Yes! you are right `binary search`.
- By this we can find out where is the element which is more that out mid or less than our mid. That\'s the whole game.
- we start using normal binary search and let\'s think about the if else cases of our binary search.
- now if out `arr[mid]` is less than `arr[mid+1]` than we can understand that the array is `increasing right now` so our moutain element must be `somewhere ahead` then out current mid, So we update out `start= mid+1`.
- now if out `arr[mid]` is more than `arr[mid+1]` then its `deacresing right now` so out mountain element must be `somewhere behind` so we have to pull our `end = mid`.
- now we are ready with bothh condition so when we find the place where we can go no further `{s<e}` than we will return `start` position because starting point is the place which will be peak cause we are updating it when our mid is shorter.
- I hope you got the logic behind it.
<!-- Describe your approach to solving the problem. -->

# Complexity
- Time complexity: O(log(n))
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

## Upvote! It only takes 1 click :)

# Code
```
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        int mid = s + (e-s)/2;
        while(s<e){
            if(arr[mid] < arr[mid+1]){
                s = mid+1;
            }
            else{
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return s;
    }
};
```
![Upvote.jpeg](https://assets.leetcode.com/users/images/96831e02-0f66-4a4c-9579-d82d032ff6d8_1681324553.738334.jpeg)


</details>

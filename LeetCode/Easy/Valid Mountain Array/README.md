# Valid Mountain Array

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 10, 2026 |
| **Tags** | Array |
| **Link** | [View Problem](https://leetcode.com/problems/valid-mountain-array/) |
| **Runtime** | 22 ms |
| **Memory** | 26.2 MB |

## Approach

in this question arrr is increase then decrease so mountain patten 

## Problem Description

<p>Given an array of integers <code>arr</code>, return <em><code>true</code> if and only if it is a valid mountain array</em>.</p>

<p>Recall that arr is a mountain array if and only if:</p>

<ul>
	<li><code>arr.length &gt;= 3</code></li>
	<li>There exists some <code>i</code> with <code>0 &lt; i &lt; arr.length - 1</code> such that:
	<ul>
		<li><code>arr[0] &lt; arr[1] &lt; ... &lt; arr[i - 1] &lt; arr[i] </code></li>
		<li><code>arr[i] &gt; arr[i + 1] &gt; ... &gt; arr[arr.length - 1]</code></li>
	</ul>
	</li>
</ul>
<img width="500" src="https://assets.leetcode.com/uploads/2019/10/20/hint_valid_mountain_array.png">
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> arr = [2,1]
<strong>Output:</strong> false
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> arr = [3,5,5]
<strong>Output:</strong> false
</pre><p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> arr = [0,3,2,1]
<strong>Output:</strong> true
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr.length &lt;= 10<sup>4</sup></code></li>
	<li><code>0 &lt;= arr[i] &lt;= 10<sup>4</sup></code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: 🗻 C++ || Best easy explanation || O(N)
**Author**: [@intellisense](https://leetcode.com/intellisense/)
**Upvotes**: 46 👍
**Link**: [View Original Post](https://leetcode.com/problems/valid-mountain-array/solutions/1717169/)

---

**\uD83D\uDC68\u200D\uD83D\uDCBB Friend\'s if you find this solution helpful \uD83D\uDE0A, PLEASE do UPVOTE. By doing that motivates me to create a better post like this \u270D\uFE0F**
____________________________________________________________________________________________________________
____________________________________________________________________________________________________________
![image](https://assets.leetcode.com/users/images/92aa9150-7e1c-4f14-a317-b4c6cdccd79e_1643070215.6347635.jpeg)

#### \u2714\uFE0F **Question Conclusion**
* we have given a array of numbers we have to find that wheather it is making a mountain or not. It should only consist of single peak.
#### \u2714\uFE0F **Solution - I (Best Approach)**
##### **Intuition :-**
* As we know the array should be start from increasing order and at some point follow decreasing order to make a peak for mountain.
* We will run a while loop until `arr[i] > arr[i+1]` and store the count in a variable after the loop exit we need to check two condition wheather` count == array length or count == 0 `if any of them is true we will return false as there will be no peak formed.
* Again we will run the while loop until` arr[i] > arr[i+1] `and continue to increment of the count variable that we intialized earlier after the loop exit we will check weather `count == array length` return true because there is no other peak formed in the array. But if` count != array length` than there can be any other formation of peak so return false.
##### **Code :-**
```
class Solution
{
public:
     bool validMountainArray(vector<int> &arr)
     {

          int length = arr.size();
          int i = 0;
          while (i < length - 1 && arr[i] < arr[i + 1])
          {
               i++;
          }
          if (i == length - 1 || i == 0)
          {
               return false;
          }
          while (i < length - 1 && arr[i] > arr[i + 1])
          {
               i++;
          }
          if (i == length - 1)
          {
               return true;
          }
          else
          {
               return false;
          }
     }
};
```
**Time Complexity** : `O(N)`, we are traversing the array only once.
**Space Complexity** : `O(1)`, No extra space is used. 
_____________________________________________________________________________________________________________
_____________________________________________________________________________________________________________

\uD83D\uDCBBIf there are any suggestions/questions in my post, comment below \uD83D\uDC47

</details>

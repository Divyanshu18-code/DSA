# Find Smallest Letter Greater Than Target

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | November 5, 2026 |
| **Tags** | Array, Binary Search |
| **Link** | [View Problem](https://leetcode.com/problems/find-smallest-letter-greater-than-target/) |
| **Runtime** | 0 ms |
| **Memory** | 19.6 MB |

## Problem Description

<p>You are given an array of characters <code>letters</code> that is sorted in <strong>non-decreasing order</strong>, and a character <code>target</code>. There are <strong>at least two different</strong> characters in <code>letters</code>.</p>

<p>Return <em>the smallest character in </em><code>letters</code><em> that is lexicographically greater than </em><code>target</code>. If such a character does not exist, return the first character in <code>letters</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> letters = ["c","f","j"], target = "a"
<strong>Output:</strong> "c"
<strong>Explanation:</strong> The smallest character that is lexicographically greater than 'a' in letters is 'c'.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> letters = ["c","f","j"], target = "c"
<strong>Output:</strong> "f"
<strong>Explanation:</strong> The smallest character that is lexicographically greater than 'c' in letters is 'f'.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> letters = ["x","x","y","y"], target = "z"
<strong>Output:</strong> "x"
<strong>Explanation:</strong> There are no characters in letters that is lexicographically greater than 'z' so we return letters[0].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= letters.length &lt;= 10<sup>4</sup></code></li>
	<li><code>letters[i]</code> is a lowercase English letter.</li>
	<li><code>letters</code> is sorted in <strong>non-decreasing</strong> order.</li>
	<li><code>letters</code> contains at least two different characters.</li>
	<li><code>target</code> is a lowercase English letter.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ || 3 Approaches || Easy to understand
**Author**: [@Anonymous_Kumar](https://leetcode.com/Anonymous_Kumar/)
**Upvotes**: 25 👍
**Link**: [View Original Post](https://leetcode.com/problems/find-smallest-letter-greater-than-target/solutions/760959/)

---

***Runtime: 28 ms, faster than 87.59% of C++ online submissions for Find Smallest Letter Greater Than Target.
Memory Usage: 16.2 MB, less than 6.06% of C++ online submissions for Find Smallest Letter Greater Than Target.***

```
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<int> alphabets(26, 0);
        for(int i=0; i<letters.size() ;i++){
            alphabets[letters[i] - \'a\']++;
        }
        int index = (target - \'a\' + 1)%26;
        while(alphabets[index] == 0){
            index = (index+1)%26;
        }
        return \'a\'+index;
    }
};
```
***Runtime: 24 ms, faster than 95.45% of C++ online submissions for Find Smallest Letter Greater Than Target.
Memory Usage: 16.2 MB, less than 9.85% of C++ online submissions for Find Smallest Letter Greater Than Target.***
```
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int index = upper_bound(letters.begin(), letters.end(), target) - letters.begin();
        return index >= letters.size() ? letters[0] : letters[index];
    }
};
```
***Runtime: 28 ms, faster than 87.59% of C++ online submissions for Find Smallest Letter Greater Than Target.
Memory Usage: 15.9 MB, less than 77.27% of C++ online submissions for Find Smallest Letter Greater Than Target.***
```
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0;
        int high = letters.size()-1;
        while(low < high){
            int mid = low + (high - low)/2;
            if(letters[mid] <= target){
                low = mid+1;
            }else{
                high = mid;
            }
        }
        return letters[low] > target ? letters[low] : letters[0];
    }
};
```

</details>

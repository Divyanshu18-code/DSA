# Detect Capital

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 28, 2026 |
| **Tags** | String |
| **Link** | [View Problem](https://leetcode.com/problems/detect-capital/) |
| **Runtime** | 0 ms |
| **Memory** | 8 MB |

## Problem Description

<p>We define the usage of capitals in a word to be right when one of the following cases holds:</p>

<ul>
	<li>All letters in this word are capitals, like <code>"USA"</code>.</li>
	<li>All letters in this word are not capitals, like <code>"leetcode"</code>.</li>
	<li>Only the first letter in this word is capital, like <code>"Google"</code>.</li>
</ul>

<p>Given a string <code>word</code>, return <code>true</code> if the usage of capitals in it is right.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> word = "USA"
<strong>Output:</strong> true
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> word = "FlaG"
<strong>Output:</strong> false
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= word.length &lt;= 100</code></li>
	<li><code>word</code> consists of lowercase and uppercase English letters.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: ✅ Easiest C++ solution || O(N) || 0ms
**Author**: [@ayushsenapati123](https://leetcode.com/ayushsenapati123/)
**Upvotes**: 204 👍
**Link**: [View Original Post](https://leetcode.com/problems/detect-capital/solutions/2982608/)

---

**PLEASE UPVOTE IF YOU FIND MY APPROACH HELPFUL, MEANS A LOT \uD83D\uDE0A**

**Intuition:** use a counter and isupper function to check number of capital.

**Approach:**
* Initialize count=0
* if count equals 0 means all are small chars
* if count equals size of word then all are capital
* if count equals 1 then check is it the first char which is capital
* if none of the conditions are true then return false

```
class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        if(word.size()==1)
            return true;
        
        for(int i=0; i<word.size(); i++)
            if(isupper(word[i]))
                count++;
        
        if(count==1 && isupper(word[0]))
            return true;
        if(count==0 || count==word.size())
            return true;
        else
            return false;
    }
};
```
**Time Complexity** => `O(N)`
**Space Complexity** => `O(1)`

![image](https://assets.leetcode.com/users/images/a3183549-bacc-4b16-80bc-ee7d1a712527_1672630358.5954974.png)

![image](https://assets.leetcode.com/users/images/3854ee2d-649c-49f3-9978-03a770436e43_1672629742.3828926.png)


</details>

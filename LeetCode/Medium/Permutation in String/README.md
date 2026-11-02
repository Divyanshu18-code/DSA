# Permutation in String

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | November 3, 2026 |
| **Tags** | Hash Table, Two Pointers, String, Sliding Window |
| **Link** | [View Problem](https://leetcode.com/problems/permutation-in-string/) |
| **Runtime** | 1106 ms |
| **Memory** | 60.2 MB |

## Problem Description

<p>Given two strings <code>s1</code> and <code>s2</code>, return <code>true</code> if <code>s2</code> contains a <span data-keyword="permutation-string" class=" cursor-pointer relative text-dark-blue-s text-sm"><button type="button" aria-haspopup="dialog" aria-expanded="false" aria-controls="radix-_r_t_" data-state="closed" class="">permutation</button></span> of <code>s1</code>, or <code>false</code> otherwise.</p>

<p>In other words, return <code>true</code> if one of <code>s1</code>'s permutations is the substring of <code>s2</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s1 = "ab", s2 = "eidbaooo"
<strong>Output:</strong> true
<strong>Explanation:</strong> s2 contains one permutation of s1 ("ba").
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s1 = "ab", s2 = "eidboaoo"
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s1.length, s2.length &lt;= 10<sup>4</sup></code></li>
	<li><code>s1</code> and <code>s2</code> consist of lowercase English letters.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: [C++] Concise Solution
**Author**: [@KasraGhodsi](https://leetcode.com/KasraGhodsi/)
**Upvotes**: 143 👍
**Link**: [View Original Post](https://leetcode.com/problems/permutation-in-string/solutions/357821/)

---

```cpp
bool checkInclusion(string s1, string s2) {
	vector<int> cur(26), goal(26);
	for(char c : s1) goal[c - \'a\']++;
	for(int i = 0; i < s2.size(); i++) {
		cur[s2[i] - \'a\']++;
		if(i >= s1.size()) cur[s2[i - s1.size()] - \'a\']--;
		if(goal == cur) return true;
	}
	return false;
}
```

</details>

# Remove All Adjacent Duplicates In String

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | November 17, 2026 |
| **Tags** | String, Stack |
| **Link** | [View Problem](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/) |
| **Runtime** | 5 ms |
| **Memory** | 14.4 MB |

## Problem Description

<p>You are given a string <code>s</code> consisting of lowercase English letters. A <strong>duplicate removal</strong> consists of choosing two <strong>adjacent</strong> and <strong>equal</strong> letters and removing them.</p>

<p>We repeatedly make <strong>duplicate removals</strong> on <code>s</code> until we no longer can.</p>

<p>Return <em>the final string after all such duplicate removals have been made</em>. It can be proven that the answer is <strong>unique</strong>.</p>

<p>&nbsp;</p>
<p><span class="float-right -my-0.5 ml-2 inline-flex select-none items-center" data-example-lang-controls=""><span role="group" class="inline-flex h-6 items-center rounded-sd-md bg-sd-muted p-0.5" data-example-lang-toggle=""><button type="button" aria-pressed="true" class="h-5 max-w-[10rem] truncate whitespace-nowrap rounded-sd-sm border px-2 text-xs font-normal leading-none border-sd-border bg-sd-background text-sd-foreground">Original</button><button type="button" aria-pressed="false" class="h-5 max-w-[10rem] truncate whitespace-nowrap rounded-sd-sm border px-2 text-xs font-normal leading-none border-transparent text-sd-muted-foreground hover:text-sd-foreground">C++</button></span></span><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "abbaca"
<strong>Output:</strong> "ca"
<strong>Explanation:</strong> 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s = "azxxzy"
<strong>Output:</strong> "ay"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: ✅✅Easy C++ Solution || Simple to Understand
**Author**: [@debav2](https://leetcode.com/debav2/)
**Upvotes**: 116 👍
**Link**: [View Original Post](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/solutions/2430136/)

---

	class Solution {
	public:
		string removeDuplicates(string s) {

			string ans;
			ans.push_back(s[0]);

			for(int i=1 ; i<s.length() ; i++){

				if(!ans.empty() && s[i] == ans.back()){
					ans.pop_back();
				}
				else{
					ans.push_back(s[i]);
				}
			}

			return ans;
		}
	};
I hope that you\'ve found the solution useful.
In that case, please do upvote. Happy Coding :)

</details>

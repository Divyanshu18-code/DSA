# Backspace String Compare

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 1, 2026 |
| **Tags** | Two Pointers, String, Stack, Simulation |
| **Link** | [View Problem](https://leetcode.com/problems/backspace-string-compare/) |
| **Runtime** | 0 ms |
| **Memory** | 8.6 MB |

## Problem Description

<p>Given two strings <code>s</code> and <code>t</code>, return <code>true</code> <em>if they are equal when both are typed into empty text editors</em>. <code>'#'</code> means a backspace character.</p>

<p>Note that after backspacing an empty text, the text will continue empty.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "ab#c", t = "ad#c"
<strong>Output:</strong> true
<strong>Explanation:</strong> Both s and t become "ac".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s = "ab##", t = "c#d#"
<strong>Output:</strong> true
<strong>Explanation:</strong> Both s and t become "".
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> s = "a#c", t = "b"
<strong>Output:</strong> false
<strong>Explanation:</strong> s becomes "c" while t becomes "b".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code><span>1 &lt;= s.length, t.length &lt;= 200</span></code></li>
	<li><span><code>s</code> and <code>t</code> only contain lowercase letters and <code>'#'</code> characters.</span></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Can you solve it in <code>O(n)</code> time and <code>O(1)</code> space?</p>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ Simple And Easy Explanation :-  100% Memory And 100% speed 0ms /O(1) space & O(N) Time
**Author**: [@monga_anmol123](https://leetcode.com/monga_anmol123/)
**Upvotes**: 222 👍
**Link**: [View Original Post](https://leetcode.com/problems/backspace-string-compare/solutions/570511/)

---

Implementation using two pointer- 1st to traverse the string and second to store the character at given position
* Suppose 2 pointer i & k
* Start traversing the by first pointer(i) if it is # then decrease the 2nd pointer(k )(k>=0)  .And if it is not # then increase the pointer(k) and store the element at k th position.
```S[k]=S[i] ```
* Same will be done to 2nd string And suppose its 2nd pointer is p
* If k and p are not equal means the string have differnt length. If same, then compare every element.
```
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int k=0,p=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==\'#\')
            {
                k--;
                 k=max(0,k);
            }
            
           else
           {
               s[k]=s[i];
               k++;
           }
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]==\'#\')
            {
                p--;
                 p=max(0,p);
            }
            
           else
           {
               t[p]=t[i];
               p++;
           }
        }
        if(k!=p)
            return false;
        else
        {
            for(int i=0;i<k;i++)
            {
                if(s[i]!=t[i])
                    return false;
            }
            return true;
        }
        
    }
};
```

</details>

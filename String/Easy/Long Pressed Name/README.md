# Long Pressed Name

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 2, 2026 |
| **Tags** | Two Pointers, String |
| **Link** | [View Problem](https://leetcode.com/problems/long-pressed-name/) |
| **Runtime** | 0 ms |
| **Memory** | 8.9 MB |

## Problem Description

<p>Your friend is typing his <code>name</code> into a keyboard. Sometimes, when typing a character <code>c</code>, the key might get <em>long pressed</em>, and the character will be typed 1 or more times.</p>

<p>You examine the <code>typed</code> characters of the keyboard. Return <code>True</code> if it is possible that it was your friends name, with some characters (possibly none) being long pressed.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> name = "alex", typed = "aaleex"
<strong>Output:</strong> true
<strong>Explanation: </strong>'a' and 'e' in 'alex' were long pressed.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> name = "saeed", typed = "ssaaedd"
<strong>Output:</strong> false
<strong>Explanation: </strong>'e' must have been pressed twice, but it was not in the typed output.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= name.length, typed.length &lt;= 1000</code></li>
	<li><code>name</code> and <code>typed</code> consist of only lowercase English letters.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: [easy understanding][3 ways][c++]
**Author**: [@rajat_gupta_](https://leetcode.com/rajat_gupta_/)
**Upvotes**: 12 👍
**Link**: [View Original Post](https://leetcode.com/problems/long-pressed-name/solutions/843049/)

---

```
//1.[ faster than 100.00%][Runtime: 0 ms]
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if(name[0]!=typed[0]) return false;
        int i=0,j=0;
        while(i<typed.size() || j<name.size()){
            if(typed[i]==name[j]) j++;
            else if(typed[i]!=typed[i-1]) return false;
            i++;
        }
        return true;
    }
};
//2.[ faster than 100.00%][Runtime: 0ms]
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
    if(name.size()>typed.size()) return false;
    
    if(name[0]!=typed[0]) return false;
    
    int i=1,j=1;
    while(i<name.size() && j<typed.size()){
        if(name[i]==typed[j])
            i++,j++;
        else if(typed[j]==typed[j-1])
            j++;
        else
            return false;
    }
    
    while(j<typed.size()){
        if(typed[j]!=typed[j-1]) return false;
        j++;
    }
    
    if(i==name.size())
        return true;
    else
        return false;
    }
};
//3.[Runtime: 4 ms]
class Solution {
public:
    bool isLongPressedName(string name, string typed) 
    {
        for(int i=0; i<typed.size(); i++){
            while((i+1 < typed.size()) && (typed[i] == typed[i+1]) && (name[i+1] != typed[i+1]))
                 typed.erase(i+1, 1);
        }
        
        if(name == typed)
            return true;
        return false;
    }
};
```
**Feel free to ask any question in the comment section.**
I hope that you\'ve found the solution useful.
In that case, **please do upvote and encourage me** to on my quest to document all leetcode problems\uD83D\uDE03
Happy Coding :)


</details>

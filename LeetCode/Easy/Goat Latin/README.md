# Goat Latin

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 4, 2026 |
| **Tags** | String |
| **Link** | [View Problem](https://leetcode.com/problems/goat-latin/) |
| **Runtime** | 3 ms |
| **Memory** | 9 MB |

## Problem Description

<p>You are given a string <code>sentence</code> that consist of words separated by spaces. Each word consists of lowercase and uppercase letters only.</p>

<p>We would like to convert the sentence to "Goat Latin" (a made-up language similar to Pig Latin.) The rules of Goat Latin are as follows:</p>

<ul>
	<li>If a word begins with a vowel (<code>'a'</code>, <code>'e'</code>, <code>'i'</code>, <code>'o'</code>, or <code>'u'</code>), append <code>"ma"</code> to the end of the word.

	<ul>
		<li>For example, the word <code>"apple"</code> becomes <code>"applema"</code>.</li>
	</ul>
	</li>
	<li>If a word begins with a consonant (i.e., not a vowel), remove the first letter and append it to the end, then add <code>"ma"</code>.
	<ul>
		<li>For example, the word <code>"goat"</code> becomes <code>"oatgma"</code>.</li>
	</ul>
	</li>
	<li>Add one letter <code>'a'</code> to the end of each word per its word index in the sentence, starting with <code>1</code>.
	<ul>
		<li>For example, the first word gets <code>"a"</code> added to the end, the second word gets <code>"aa"</code> added to the end, and so on.</li>
	</ul>
	</li>
</ul>

<p>Return<em> the final sentence representing the conversion from sentence to Goat Latin</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> sentence = "I speak Goat Latin"
<strong>Output:</strong> "Imaa peaksmaaa oatGmaaaa atinLmaaaaa"
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> sentence = "The quick brown fox jumped over the lazy dog"
<strong>Output:</strong> "heTmaa uickqmaaa rownbmaaaa oxfmaaaaa umpedjmaaaaaa overmaaaaaaa hetmaaaaaaaa azylmaaaaaaaaa ogdmaaaaaaaaaa"
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= sentence.length &lt;= 150</code></li>
	<li><code>sentence</code> consists of English letters and spaces.</li>
	<li><code>sentence</code> has no leading or trailing spaces.</li>
	<li>All the words in <code>sentence</code> are separated by a single space.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ Clean&Clear Solution 100% faster using istringstream with explanations
**Author**: [@DebbieAlter](https://leetcode.com/DebbieAlter/)
**Upvotes**: 9 👍
**Link**: [View Original Post](https://leetcode.com/problems/goat-latin/solutions/800141/)

---

```
class Solution {
public:
    string toGoatLatin(string S) 
    {
        // result
        string goatLatin = "";
        
        static const string VOWELS = "aAeEiIoOuU";
        
        // to keep count of how many "a"s to add
        size_t count = 1;
        
		// for spliting sentence to words
        std::istringstream ss(S); 
        
    	while (ss)
	    { 
        	std::string word; 
        	ss >> word;
            
		    // convert word to goat latin according to case
            if(!word.empty())
            {
                goatLatin += VOWELS.find(word[0]) != string::npos ? word + "ma" + std::string(count, \'a\') + " " : word.substr(1, word.length() - 1) + word[0] + "ma" +  std::string(count, \'a\') + " ";
            }
             
            // increment for next word
            count ++;
	    }
		// return sentence without last space
        return goatLatin.substr(0, goatLatin.length() - 1);
    }
};
```

</details>

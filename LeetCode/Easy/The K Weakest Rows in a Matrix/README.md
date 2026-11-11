# The K Weakest Rows in a Matrix

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | November 11, 2026 |
| **Tags** | Array, Binary Search, Sorting, Heap (Priority Queue), Matrix |
| **Link** | [View Problem](https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/) |
| **Runtime** | 1 ms |
| **Memory** | 14.5 MB |

## Problem Description

<p>You are given an <code>m x n</code> binary matrix <code>mat</code> of <code>1</code>'s (representing soldiers) and <code>0</code>'s (representing civilians). The soldiers are positioned <strong>in front</strong> of the civilians. That is, all the <code>1</code>'s will appear to the <strong>left</strong> of all the <code>0</code>'s in each row.</p>

<p>A row <code>i</code> is <strong>weaker</strong> than a row <code>j</code> if one of the following is true:</p>

<ul>
	<li>The number of soldiers in row <code>i</code> is less than the number of soldiers in row <code>j</code>.</li>
	<li>Both rows have the same number of soldiers and <code>i &lt; j</code>.</li>
</ul>

<p>Return <em>the indices of the </em><code>k</code><em> <strong>weakest</strong> rows in the matrix ordered from weakest to strongest</em>.</p>

<p>&nbsp;</p>
<p><span class="float-right -my-0.5 ml-2 inline-flex select-none items-center" data-example-lang-controls=""><span role="group" class="inline-flex h-6 items-center rounded-sd-md bg-sd-muted p-0.5" data-example-lang-toggle=""><button type="button" aria-pressed="true" class="h-5 max-w-[10rem] truncate whitespace-nowrap rounded-sd-sm border px-2 text-xs font-normal leading-none border-sd-border bg-sd-background text-sd-foreground">Original</button><button type="button" aria-pressed="false" class="h-5 max-w-[10rem] truncate whitespace-nowrap rounded-sd-sm border px-2 text-xs font-normal leading-none border-transparent text-sd-muted-foreground hover:text-sd-foreground">C++</button></span></span><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> mat = 
[[1,1,0,0,0],
 [1,1,1,1,0],
 [1,0,0,0,0],
 [1,1,0,0,0],
 [1,1,1,1,1]], 
k = 3
<strong>Output:</strong> [2,0,3]
<strong>Explanation:</strong> 
The number of soldiers in each row is: 
- Row 0: 2 
- Row 1: 4 
- Row 2: 1 
- Row 3: 2 
- Row 4: 5 
The rows ordered from weakest to strongest are [2,0,3,1,4].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> mat = 
[[1,0,0,0],
 [1,1,1,1],
 [1,0,0,0],
 [1,0,0,0]], 
k = 2
<strong>Output:</strong> [0,2]
<strong>Explanation:</strong> 
The number of soldiers in each row is: 
- Row 0: 1 
- Row 1: 4 
- Row 2: 1 
- Row 3: 1 
The rows ordered from weakest to strongest are [0,2,3,1].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == mat.length</code></li>
	<li><code>n == mat[i].length</code></li>
	<li><code>2 &lt;= n, m &lt;= 100</code></li>
	<li><code>1 &lt;= k &lt;= m</code></li>
	<li><code>matrix[i][j]</code> is either 0 or 1.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: ✅ C++ || 2 Approaches || Algorithm || Set || Heap || Pair || STL
**Author**: [@knockcat](https://leetcode.com/knockcat/)
**Upvotes**: 105 👍
**Link**: [View Original Post](https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/solutions/1886772/)

---

# 1337. The K Weakest Rows in a Matrix
**KNOCKCAT**

```
1. Easy C++
2. Line by Line Explanation with Comments.
3. Detailed Explanation \u2705
4. 2 Approaches using set and priority queue.
5. Initution is to use a set of pairs to store cnt of 1s & index,
   set will automatically sort the pair in ascending order, and the first k pair index is our answer
6. another apraoch to use priority queue of pair to maintain cnt and index.
7. Please Upvote if it helps\u2B06\uFE0F
8. Link to my Github Profile contains a repository of Leetcode with all my Solutions. \u2B07\uFE0F
	// \uD83D\uDE09If you Like the repository don\'t foget to star & fork the repository\uD83D\uDE09
```

[LeetCode](http://github.com/knockcat/Leetcode) **LINK TO LEETCODE REPOSITORY**


# USING SET
**ALGORITHM**
* **Make a set of pairs.**
	*  where the **first element of the pair is the count of ones in the row** , this will be **done by stl count function.**
	*  **Second element of pair denote the index of respective row**.
* As per property of set,
	* the **pairs will get automatically sort in ascending order** on the basis of count
	* and, **if count going to same, the pair with smmaler index is up as per question.**
* now we will **use a vector ans, and push_back the first k indexes of weakest rows in our vector.**
* **return ans vector.**

ANALYSIS :-
	**TIME COMPLEXITY** :- **O(N logN)**   (N is number of rows in Matrix)
	**SPACE COMPLEXITY** :- **O(N)** (N is no of rows, total pair in a set)

```
	// this func will ocunt the  number of 1\'s in the given ith row.
	cnt = count(mat[i].begin(),mat[i].end(),1);	
```
**CODE WITH EXPLANATION**
```
			// \uD83D\uDE09\uD83D\uDE09\uD83D\uDE09\uD83D\uDE09Please upvote if it helps \uD83D\uDE09\uD83D\uDE09\uD83D\uDE09\uD83D\uDE09
class Solution {
public:
    
    vector<int> Weakest(vector<vector<int> >& mat, int k)
    {
        // no of rows;
        int n = mat.size();
        
        // set is to store pairs of count and index
        // count of 1 in ith row, {count,index};
        set<pair<int,int> > s;
        
        // set will automatically sort the pair {count, index} in ascending order.
        
        for(int i = 0; i<n; ++i)
        {
            // stl function for counting frequency of 1 in current row
            int cnt = count(mat[i].begin(),mat[i].end(),1);
            // inserting cnt and index pair to set
            s.insert({cnt,i});
        }
        
        vector<int> ans;
        // first k weakest row is our answer 
        for(auto i : s)
        {
            if(k == 0)
                break;
            ans.push_back(i.second);
            --k;
        }
        
        return ans;
    }
    
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        return Weakest(mat,k);
        
    }
	// for github repository link go to my profile.
};
```

# USING  PRIORITY QUEUE
**ALGORITHM**
* Now look over **priority_queue & binary search approach.**
* Create a **Priority Queue which will contains pair of count of 1\'s and index.**
* **Iterate each row** of the given matrix and **find no of soldiers using binary search.**
* **All soldiers are at beginning** i.e **each row is sorted in descending order by default.**
* After **finding no of soldier using binary search of current row, insert cnt of 1\'s** and **row index** as a **pair** in **priority queue.**
* if at any iteration **priority queue (max_heap) becomes greater than k, pop the top pair.** to **maintain max size of priority queue as k and to maintain smaller indexes & cnt up.**
* now **push pq.top().second i.e the index of k weakest rows.**
* **Reverse the vector** to have **answer in lowest cnt to highest cnt of soldiers.**
* **return ans.**

ANALYSIS :-
* 	TIME COMPLEXITY
Considering **no. of rows=m**, 
At each iteration, for binary search O(logn) and maximum heap size =k, so for inserting into max_heap O(logk)
***O(m*(logn+logk))**

* SPACE COMPLEXITY
Since maximum **heap size is k.**
**O(2*k)** [ For pair of heap ]
``` ```

**CODE WITH EXPLANATION**
```
			// \uD83D\uDE09\uD83D\uDE09\uD83D\uDE09\uD83D\uDE09Please upvote if it helps \uD83D\uDE09\uD83D\uDE09\uD83D\uDE09\uD83D\uDE09
class Solution {
public:
    
    // for calculating the soldier using binary search
    int binary(vector<int> m)
    {
        int l = 0;
        int h = m.size()-1;
        while(l <= h)
        {
            int mid = l + (h-l)/2;
            if(m[mid] == 0)
                h = mid - 1;
            else
                l = mid + 1;
        }
        return l;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        // a binary heap which will maintain pair of count and index {count,index}
        priority_queue<pair<int,int> > pq;
        vector<int> ans;
        for(int i = 0; i<mat.size(); ++i)
        {
            // calularing cnt of soldier
            int cnt = binary(mat[i]);
			
			// instead  of using binary func for calculating cnt of 1
			// we can use this stl count function
			// int cnt = count(mat[i].begin(),mat[i].end(),1);
			
            pq.push(make_pair(cnt,i));
            
            // we need to maintain top k smallest elements
            if(pq.size() > k)
                pq.pop();
        }
        
        // making answer vector
        for(int i = 0; i<k; ++i)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
	// for github repository link go to my profile.
};
```

</details>

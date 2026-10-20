# Sliding Window Maximum

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Hard |
| **Language** | cpp |
| **Solved On** | October 20, 2026 |
| **Tags** | Array, Queue, Sliding Window, Heap (Priority Queue), Monotonic Queue, Range Minimum/Maximum Query |
| **Link** | [View Problem](https://leetcode.com/problems/sliding-window-maximum/) |
| **Runtime** | 26 ms |
| **Memory** | 139.1 MB |

## Problem Description

<p>You are given an array of integers&nbsp;<code>nums</code>, there is a sliding window of size <code>k</code> which is moving from the very left of the array to the very right. You can only see the <code>k</code> numbers in the window. Each time the sliding window moves right by one position.</p>

<p>Return <em>the max sliding window</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,3,-1,-3,5,3,6,7], k = 3
<strong>Output:</strong> [3,3,5,5,6,7]
<strong>Explanation:</strong> 
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       <strong>3</strong>
 1 [3  -1  -3] 5  3  6  7       <strong>3</strong>
 1  3 [-1  -3  5] 3  6  7      <strong> 5</strong>
 1  3  -1 [-3  5  3] 6  7       <strong>5</strong>
 1  3  -1  -3 [5  3  6] 7       <strong>6</strong>
 1  3  -1  -3  5 [3  6  7]      <strong>7</strong>
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1], k = 1
<strong>Output:</strong> [1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= k &lt;= nums.length</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: 3 C++ Solutions
**Author**: [@mako](https://leetcode.com/mako/)
**Upvotes**: 118 👍
**Link**: [View Original Post](https://leetcode.com/problems/sliding-window-maximum/solutions/65999/)

---

    1. O(NlogK)
    
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        if (k == 0) return result;
        multiset<int> w;
        for (int i = 0, n = (int)nums.size(); i < n; i++) {
            if (i >= k)
                w.erase(w.find(nums[i-k]));
            w.insert(nums[i]);
            if (i >= k-1)
                result.push_back(*w.rbegin());
        }
        return result;
    }
    
    2. O(NlogN)
    
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        if (k == 0) return result;
        priority_queue<pair<int, int>> w;
        for (int i = 0, n = (int)nums.size(); i < n; i++) {
            while (!w.empty() && w.top().second <= i-k)
                w.pop();
            w.push(make_pair(nums[i],i));
            if (i >= k-1)
                result.push_back(w.top().first);
        }
        return result;
    }
    
    3. O(N)
    
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        if (k == 0) return result;
        deque<int> w;
        for (int i = 0, n = (int)nums.size(); i < n; i++) {
            while (!w.empty() && w.front() <= i-k)
                w.pop_front();
            while (!w.empty() && nums[w.back()] <= nums[i])
                w.pop_back();
            w.push_back(i);
            if (i >= k-1)
                result.push_back(nums[w.front()]);
        }
        return result;
    }

</details>

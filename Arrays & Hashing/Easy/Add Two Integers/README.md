# Add Two Integers

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 19, 2026 |
| **Tags** | Math |
| **Link** | [View Problem](https://leetcode.com/problems/add-two-integers/) |
| **Runtime** | 0 ms |
| **Memory** | 8.1 MB |

## Problem Description

Given two integers <code>num1</code> and <code>num2</code>, return <em>the <strong>sum</strong> of the two integers</em>.
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> num1 = 12, num2 = 5
<strong>Output:</strong> 17
<strong>Explanation:</strong> num1 is 12, num2 is 5, and their sum is 12 + 5 = 17, so 17 is returned.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> num1 = -10, num2 = 4
<strong>Output:</strong> -6
<strong>Explanation:</strong> num1 + num2 = -6, so -6 is returned.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-100 &lt;= num1, num2 &lt;= 100</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Solutions in Every Language *on leetcode* | One-Liner ✅
**Author**: [@Z3ROsum](https://leetcode.com/Z3ROsum/)
**Upvotes**: 27 👍
**Link**: [View Original Post](https://leetcode.com/problems/add-two-integers/solutions/2670517/)

---

**1. C++**
```
class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};
```
**2. Java**
```
class Solution {
    public int sum(int num1, int num2) {
        return num1 + num2;
    }
}
```
**3. Python3**
```
class Solution:
    def sum(self, num1: int, num2: int) -> int:
        return num1 + num2
```
\u261D\uFE0F which is not actually necessary

You can do this instead:
```
class Solution:
    sum = add
```

**4. C**
```
int sum(int num1, int num2){
    return num1 + num2;
}
```
**5. C#**
```
public class Solution {
    public int Sum(int num1, int num2) {
        return num1 + num2;
    }
}
```
**6. JavaScript**
```
var sum = function(num1, num2) {
    return num1 + num2;
};
```
**7. Ruby**
```
def sum(num1, num2)
    num1 + num2
end
```
**8. Swift**
```
class Solution {
    func sum(_ num1: Int, _ num2: Int) -> Int {
        num1 + num2
    }
}
```
**9. Go**
```
func sum(num1 int, num2 int) int {
    return num1 + num2
}
```
**10. Scala**
```
object Solution {
    def sum(num1: Int, num2: Int): Int = {
        return num1 + num2
    }
}
```
**11. Kotlin**
```
class Solution {
    fun sum(num1: Int, num2: Int): Int {
        return num1 + num2
    }
}
```
**12. Rust**
```
impl Solution {
    pub fn sum(num1: i32, num2: i32) -> i32 {
        return num1 + num2
    }
}
```
**13. PHP**
```
class Solution {
    function sum($num1, $num2) {
        return $num1 + $num2;
    }
}
```
**14. Typescript**
```
function sum(num1: number, num2: number): number {
    return num1 + num2
};
```
**15. Racket**
```
(define/contract (sum num1 num2)
  (-> exact-integer? exact-integer? exact-integer?)
    (+ num1 num2)
  )
```
**16. Erlang**
```
-spec sum(Num1 :: integer(), Num2 :: integer()) -> integer().
sum(Num1, Num2) ->
    Num1 + Num2.
```
**17. Elixir**
```
defmodule Solution do
  @spec sum(num1 :: integer, num2 :: integer) :: integer
  def sum(num1, num2) do
    num1 + num2
  end
end
```
**18. Dart**
```
class Solution {
  int sum(int num1, int num2) {
    return num1 + num2;
  }
}
```

**19. Python 2**
```Python
class Solution(object):
    sum = add
```

That\'s it... Upvote if you liked this solution

</details>

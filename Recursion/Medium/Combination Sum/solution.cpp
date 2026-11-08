class Solution {
public:
    void backtrack(vector<int>& candidates, int target, int index, vector<int>& current,
        vector<vector<int>>& ans) {
        if(target == 0) {
            ans.push_back(current);
            return;
        }
        if(target < 0) {
            return;
        }
        for(int i=index; i<candidates.size(); i++) {
            current.push_back(candidates[i]);
            backtrack(candidates, target-candidates[i], i, current, ans);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        int index = 0;
        vector<int> current;
        vector<vector<int>> ans;
        backtrack(candidates, target, index, current, ans);
        return ans;
    }
};
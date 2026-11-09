class Solution {
public:
    void backtrack(vector<int>& candidates, int target, int idx, vector<int>& curr, vector<vector<int>>& ans) {
        if(target == 0) {
            ans.push_back(curr);
            return;
        }
        if(target < 0) {
            return;
        }
        for(int i=idx; i<candidates.size(); i++) {
            if(i > idx && candidates[i] == candidates[i-1]) {    //duplicate check
                continue;
            }
            curr.push_back(candidates[i]);    //choose  
            backtrack(candidates, target-candidates[i], i+1, curr, ans);   //explore
            curr.pop_back();   //undo
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        sort(candidates.begin(), candidates.end());
        int idx = 0;
        vector<int> curr;
        vector<vector<int>> ans;
        backtrack(candidates, target, idx, curr, ans);
        return ans;
    }
};
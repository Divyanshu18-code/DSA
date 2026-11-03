class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> result;
        for(int i=0; i<n; i++) {
            string temp = strs[i];    //copy original string
            sort(temp.begin(), temp.end());
            result[temp].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto it : result) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
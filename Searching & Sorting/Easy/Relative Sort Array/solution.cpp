class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        vector<bool> visited(arr1.size(), false);
        for(int i=0; i<arr2.size(); i++) {
            for(int j=0; j<arr1.size(); j++) {
                if(arr1[j] == arr2[i] && visited[j] == false) {
                    ans.push_back(arr1[j]);
                    visited[j] = true;
                }
            }
        }
        vector<int> temp;
        for(int j=0; j<arr1.size(); j++) {
            if(visited[j] == false) {
                temp.push_back(arr1[j]);
            }
        }
        sort(temp.begin(), temp.end());
        ans.insert(ans.end(), temp.begin(), temp.end());
        return ans;
    }
};
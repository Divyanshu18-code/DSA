class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        if(n == 0) {
            return arr;
        }
        int maxRight = arr[n-1];
        for(int i=n-2; i>=0; i--) {    // Traverse from right to left
            int current = arr[i];
            arr[i] = maxRight;     // Replace with greatest right element
            maxRight = max(maxRight, current); 
        }
        arr[n-1] = -1;   // Last element has no right element
        return arr;
    }
};
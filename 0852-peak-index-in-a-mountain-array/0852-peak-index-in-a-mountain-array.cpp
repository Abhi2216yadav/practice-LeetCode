class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxval = INT_MIN;
        int n = arr.size();
        int idx = -1;

        for(int i = 0; i<n; i++){
            if(maxval < arr[i]){
                maxval = arr[i];
                idx = i;
            }
        }
        return idx;
    }
};
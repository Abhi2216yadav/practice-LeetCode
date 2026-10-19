class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> l;
        

        sort(nums.begin(), nums.end());

        for(int i =0; i<n; i++){
            if(nums[i] == target){
                l.push_back(i);
            }
        }
        return l;
    }
};
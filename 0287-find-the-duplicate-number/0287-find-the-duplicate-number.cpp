class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int ans;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};

        // space complecity O(n)
        // unordered_map<int, int> m;

        // int ans;
        // for(int val : nums){
        //     m[val]++;

        //     if(m[val] == 2){
        //         ans = val;
        //         break;
        //     }
        // }

        // Array modifie with sort
        // sort(nums.begin(), nums.end());
    
        // int ans;
        // for(int i = 1; i < nums.size(); i++){
        //     if(nums[i] == nums[i-1]){
        //         ans = nums[i];
        //         break;
        //     }
        // }
        // return ans;
class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int> st(nums.begin(), nums.end());

        int targ = nums[0];

        for(int i = 1; i<n; i++){
            if(nums[i] != nums[i-1] + 1){
                break;
            }
            targ += nums[i];
        }

        while(st.count(targ)){
            targ++;
        }
       return targ;
    }
};


        // for(int val : nums){
        //     targ = max(targ, val);
        // }
        
        // int sum = 0;
        // int ans = 0;

        // for(int val : nums){
        //     sum += val;

        //     if(sum >= targ){
        //         ans = sum;
        //         break;
        //     }
        // }
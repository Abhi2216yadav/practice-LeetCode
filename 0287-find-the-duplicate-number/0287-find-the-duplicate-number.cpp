class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0], fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);

        slow = nums[0];

        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
        
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
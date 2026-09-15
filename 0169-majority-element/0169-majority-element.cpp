class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        int ans;

        for(int val : nums){
            m[val]++;

            if(m[val] > nums.size()/2){
                ans = val;
                break;
            }
        }

        return ans;
    }
};
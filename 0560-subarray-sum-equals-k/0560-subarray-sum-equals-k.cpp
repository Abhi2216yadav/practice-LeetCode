class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> m;

        m[0] = 1;
        int count = 0;
        int psum =0;

        for(int i =0; i<n; i++){
            psum += nums[i];

            int val = psum - k;

            if(m.find(val) != m.end()){
                count += m[val];
            }
            m[psum]++;
        }

        return count;
    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        //prefix
        for(int i = 1; i < n; i++){
            ans[i] = ans[i-1] * nums[i-1];
        }

        //suffix
        int suffix = 1;
        for(int i = n-2; i >=0; i--){
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }
   
        return ans;
    }
};

        // O(n*2) TC brutforce approch Method = 1

        // for(int i = 0; i< n; i++){
        //     int mul = 1;
        //     for(int j = 0; j< n; j++){
        //         if(i != j){
        //         mul *= nums[j];
        //         }
        //     }
        //     answer.push_back(mul);
        // }

        // Method 2 : using prefix and suffix
        // vector<int> prefix(n, 1); // sc: O(n)
        // vector<int> suffix(n, 1);

        // //prefix
        // for(int i = 1; i < n; i++){
        //     prefix[i] = prefix[i-1] * nums[i-1];
        // }

        // //suffix
        // for(int i = n-2; i >=0; i--){
        //     suffix[i] = suffix[i+1] * nums[i+1];
        // }

        // //calculate answer
        // for(int i = 0; i<n; i++){
        //     ans[i] = prefix[i] * suffix[i];
        // }
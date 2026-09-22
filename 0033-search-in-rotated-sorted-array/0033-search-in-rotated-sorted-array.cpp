class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0, j = n-1;

        int idx = -1;
        while(i <= j){
           
            if(nums[i] == target ){
                idx = i;
                break;
            }else if(nums[j] == target){
                idx = j;
                break;
            }else if(nums[i] < target){
                i++;
            }else{
                j--;
            }
        }
        return idx;
    }
};
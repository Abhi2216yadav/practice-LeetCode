class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
        int n = nums.size();

        //step1 find pivot
        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                pivot = i;
                break;
            }
        }

        //Edge case 

        if(pivot == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        //step2 find right most element greater than pivot
        for(int i = n-1; i >= 0; i--){
            if(nums[pivot] < nums[i]){
                swap(nums[pivot], nums[i]);
                break;
            }
        }

        //step3 reverse the rest element after the pivot
        int i = pivot+1, j = n-1;

        while(i <= j){
            swap(nums[i], nums[j]);
            i++; j--;
        }
    }
};
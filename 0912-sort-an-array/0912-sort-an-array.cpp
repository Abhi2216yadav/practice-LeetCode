class Solution {
public:
    void merge(vector<int>& arr, int s, int m, int e) {
        vector<int> temp;

        int i = s;
        int j = m + 1;

        while(i <= m && j <= e) {
            if(arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
            }
        }

        while(i <= m)
            temp.push_back(arr[i++]);

        while(j <= e)
            temp.push_back(arr[j++]);

        for(int k = 0; k < temp.size(); k++) {
            arr[s + k] = temp[k];
        }
    }

    void mergeSort(vector<int>& nums, int st, int end) {
        if(st >= end)
            return;

        int mid = st + (end - st) / 2;

        mergeSort(nums, st, mid);
        mergeSort(nums, mid + 1, end);

        merge(nums, st, mid, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
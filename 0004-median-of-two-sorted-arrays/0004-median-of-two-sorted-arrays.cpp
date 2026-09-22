class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> res(n+m);
        int i =0, j = 0, k = 0;

        while(i<n && j < m){
            if(nums1[i] <= nums2[j]){
                res[k++] = nums1[i++];

            }else{
                res[k++] = nums2[j++];
            }
        }
        while(i < n){
            res[k++] = nums1[i++];

        }
        while(j < m){
            res[k++] = nums2[j++];
        }
        
        if((m+n) % 2  == 0){
            int idx = (m+n)/2;
            return (res[idx-1]+res[idx])/2.0;
        }else{
            int idx = (m+n)/2 ;
            return res[idx];
        }
       
    }
};
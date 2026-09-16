class Solution {
public:
    int maxArea(vector<int>& height) {
        int MaxWater = INT_MIN;
        int n = height.size();
        int r = n-1, i = 0;

        while(i < r){
            int h = min(height[i], height[r]);
            int l = r - i;
            int area = l * h;

            MaxWater = max(MaxWater, area);
            
            if(height[i] > height[r]){
                r--;
            }else{
                i++;
            }
        }
        return MaxWater;
    }
};
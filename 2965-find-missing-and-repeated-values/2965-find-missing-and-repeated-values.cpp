class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int n = grid.size();
        unordered_set<int> s;

        int a;
        int exptSum = 0, ActualSum = 0;

        for(int i =0; i< n; i++){

            for(int j = 0; j < n; j++){
               
                ActualSum += grid[i][j];

                if(s.find(grid[i][j]) != s.end()){
                    a = grid[i][j];
                    ans.push_back(a);
                }

                s.insert(grid[i][j]);
            }
           
        }

        exptSum = (n*n) *(n*n +1) / 2;
        int b = exptSum + a - ActualSum;

        ans.push_back(b);
        return ans;
    }
};
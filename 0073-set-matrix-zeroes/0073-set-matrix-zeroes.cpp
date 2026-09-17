class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> res;

        //find all zero
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (matrix[i][j] == 0) {

                    res.push_back({i, j});
                }
            }
        }
    
        //set zero
        for(int a = 0; a < res.size(); a++) {
            int r = res[a][0];
            int c = res[a][1];

            for (int i = 0; i < n; i++) {
            
                matrix[i][c] = 0;
                
            }

            for (int k = 0; k < m; k++) {
            
                matrix[r][k] = 0;
                
            }
        }
    }
};
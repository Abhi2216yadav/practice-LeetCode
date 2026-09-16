class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& N, int target) {
        int n = N.size();
        vector<vector<int>> ans;
        sort(N.begin(), N.end());

        for (int i = 0; i < n; i++) {
            if (i > 0 && N[i] == N[i - 1]) continue; // skip duplicates for i

            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && N[j] == N[j - 1]) continue; // skip duplicates for j

                int p = j + 1, q = n - 1;
                while (p < q) {
                    long long sum = (long long)N[i] + (long long)N[j] + (long long)N[p] + (long long)N[q];
                    if (sum < target) {
                        p++;
                    } else if (sum > target) {
                        q--;
                    } else {
                        ans.push_back({N[i], N[j], N[p], N[q]});
                        p++; q--;
                        while (p < q && N[p] == N[p - 1]) p++;
                        while (p < q && N[q] == N[q + 1]) q--;
                    }
                }
            }
        }
        return ans;
    }
};

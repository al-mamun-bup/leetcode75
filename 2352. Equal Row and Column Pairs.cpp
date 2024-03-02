class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>>v(n);
        for(int j = 0 ; j < n ; j++){
            for(int i = 0 ; i < n; i++){
                v[j].push_back(grid[i][j]);
            }
        }
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n; j++){
                ans += (v[i]==grid[j]);
            }
        }
        return ans;
    }
};

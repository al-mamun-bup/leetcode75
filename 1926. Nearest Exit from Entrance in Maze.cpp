class Solution {
public:
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m = maze.size();
        int n = maze[0].size();
        queue<pair<int,int>>q;
        q.push({entrance[0],entrance[1]});
        maze[entrance[0]][entrance[1]] = '+';
        int ans = 0;
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                auto it = q.front();
                q.pop();
                int i = it.first;
                int j = it.second;
                if(it != make_pair(entrance[0],entrance[1])){
                    if(i==0 or i==m-1 or j==0 or j==n-1){
                        return ans;
                    }
                }
                for(int p = 0 ; p < 4 ; p++){
                    int n_i = i+dx[p];
                    int n_j = j+dy[p];
                    if(n_i>=0 and n_i < m and n_j >=0 and n_j < n and maze[n_i][n_j]!='+'){
                        q.push({n_i,n_j});
                        maze[n_i][n_j] = '+';
                    }
                }
            }
            ans++;
        } 
        return -1;
    }
};

class Solution {
public:
    int ans = 0;
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto it : connections){
            adj[it[0]].push_back({it[1],1});
            adj[it[1]].push_back({it[0],0});
        }
        dfs(adj,0,-1);
        return ans;
    }
    void dfs(vector<vector<pair<int,int>>>&adj, int node, int par ){
        for(auto it : adj[node]){
            int child = it.first;
            int dir   = it.second;
            if(child != par){
                ans += dir;
                dfs(adj,child,node);
            }
        }
    }
};

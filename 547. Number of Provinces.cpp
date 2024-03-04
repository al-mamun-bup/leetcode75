class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int ans = 0;
        vector<bool>vis(n);
        for(int i = 0; i < n ; i++){
            if(!vis[i]){
                dfs(i,vis,isConnected);
                ans++;
            }
        }
        return ans;
    }
    void dfs(int start,vector<bool>&vis,vector<vector<int>>& isConnected){
        for(int i = 0 ; i < isConnected[start].size() ; i++){
            if(isConnected[start][i]==1 and !vis[i]){
                vis[i] = true;
                dfs(i,vis,isConnected);
            }
        }
    }
   
};

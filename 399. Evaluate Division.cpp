class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string,vector<pair<string,double>>>mp;
        for(int i = 0 ; i < equations.size() ; i++){
            mp[equations[i][0]].push_back({equations[i][1],values[i]});
            mp[equations[i][1]].push_back({equations[i][0],1.0/values[i]});
        }
        vector<double>ans;
        for(int i = 0 ; i < queries.size() ; i++){
            string src = queries[i][0];
            string des = queries[i][1];
            unordered_map<string,int>vis;
            double res = -1.0;
            double temp = 1;
            if(mp.count(src))
            dfs(src,des,mp,vis,res,temp);
            ans.push_back(res);
        }
        return ans;
    }
    void dfs(string src, string des,unordered_map<string,vector<pair<string,double>>>&mp,unordered_map<string,int>&vis,double &res, double temp ){
        if(vis.count(src)) return;
        if(src==des){
            res = temp;
            return;
        }
        vis[src] = 1;
        for(auto u : mp[src]){
            dfs(u.first,des,mp,vis,res,temp*u.second);
        }
        return;
    }
};

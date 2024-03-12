class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        f(1,n,temp,k);
        return ans;
    }
    void f(int start, int n, vector<int>&temp,int k){
        if(temp.size()==k){
            if(n==0) ans.push_back(temp);
            return;
        }
        for(int i = start; i <= 9; i++){
            temp.push_back(i);
            f(i+1,n-i,temp,k);
            temp.pop_back();
        }
    }
};

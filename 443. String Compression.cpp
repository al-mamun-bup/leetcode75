class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        string ans;
        vector<pair<char,int>>v;
        for(int i = 0 ; i < n ; i++){
            if(v.empty() or v.back().first != s[i]){
                v.push_back({s[i],1});
            }else{
                v.back().second++;
            }
        }
        for(auto it : v){
            if(it.second==1){
                ans.push_back(it.first);
            }else{
                ans.push_back(it.first);
                string temp = to_string(it.second);
                ans += temp;
            }
        }
        int i = 0;
        for(auto it : ans){
            chars[i] = it;
            i++;
        }
        return ans.size();
    }
};

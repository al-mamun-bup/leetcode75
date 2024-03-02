class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>mp;
        for(auto it : word1){
            mp[it]++;
        }
        for(auto it : word2){
            if(mp[it]==0){
                return false;
            }
        }
        map<char,int>mp1;
        for(auto it : word2){
            mp1[it]++;
        }
        vector<int>a,b;
        for(auto it : mp){
            a.push_back(it.second);
        }
        for(auto it : mp1){
            b.push_back(it.second);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return a==b;

    }
};

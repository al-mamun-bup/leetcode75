class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp1,mp2;
        for(auto it : arr){
            mp1[it]++;
        }
        for(auto it : mp1){
            if(mp2[it.second]){
                return false;
            }else{
                mp2[it.second]++;
            }
        }
        return true;
    }
};

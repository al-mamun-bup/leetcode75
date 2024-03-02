class Solution {
public:
    
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for(auto it : nums2){
            mp[it]++;
        }
        vector<int>temp;
        set<int>st;
        for(auto it : nums1){
            if(mp[it]) continue;
            if(!st.count(it)){ 
                temp.push_back(it);
                st.insert(it);
            }
        }
        vector<int>ans1,ans2;
        ans1 = temp;
        temp.clear();
        mp.clear();
        st.clear();
        for(auto it : nums1){
            mp[it]++;
        }
        for(auto it : nums2){
            if(mp[it]) continue;
            if(!st.count(it)){
                temp.push_back(it);
                st.insert(it);
            }
        }
        ans2 = temp;
        return {ans1,ans2};

    }
};

class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        for(int i = 0 ; i < s.size() ; i++){
            string str;
            while(i < s.size() and s[i]!=32){
                str.push_back(s[i]);
                i++;
            }
            if(str.size()){
                v.push_back(str);
            }
        }
        string ans;
        reverse(v.begin(),v.end());
        for(auto it : v){
            ans+= it;
            ans+=' ';
        }
        ans.pop_back();
        return ans;

    }
};

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        int n = s.size();
        int m = t.size();
        while(i < n and j < m){
            if(s[i]==t[j]){
                i++,j++;
            }else if(s[i] != t[j]){
                j++;
            }
        }
        return (i==n);

    }
};

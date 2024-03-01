class Solution {
public:
    bool isvowel(char c){
        if (c=='a' or c=='e' or c=='i' or c=='o' or c=='u')
        {
            return true;
        }
        else
            return false;
    }
    int maxVowels(string s, int k) {
        deque<char>dq;
        int n = s.size();
        int ans = 0;
        int cnt = 0;
        for(int i = 0 ; i < n ; i++ ){
            dq.push_back(s[i]);
            if(isvowel(s[i])){
                cnt++;
            }
            if(dq.size()==k){
                ans = max(ans,cnt);
                if(isvowel(dq.front())){
                    cnt--;
                }
                dq.pop_front();
            }
        }
        return ans;
    }
};

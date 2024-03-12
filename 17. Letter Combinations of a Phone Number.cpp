class Solution {
public:
    
    vector<string>ans;
    vector<string> letterCombinations(string digits) {
    if(digits.size()==0) return ans;
    map<char,string>mp;
    mp['2'] = {"abc"};
    mp['3'] = {"def"};
    mp['4'] = {"ghi"};
    mp['5'] = {"jkl"};
    mp['6'] = {"mno"};
    mp['7'] = {"pqrs"};
    mp['8'] = {"tuv"};
    mp['9'] = {"wxyz"};
      string curr_string;
      solve (digits,curr_string, 0,mp);
      return ans;
    }
    void solve(string digits, string curr_string, int indx,map<char,string>&mp){
        if(indx >= digits.size()){
            ans.push_back(curr_string);
            return;
        }
        char ch = digits[indx]; 
        for(int i = 0 ; i < mp[ch].size();i++){
            curr_string.push_back(mp[ch][i]);
            solve(digits,curr_string,indx+1,mp);
            curr_string.pop_back();
        }
    }
};

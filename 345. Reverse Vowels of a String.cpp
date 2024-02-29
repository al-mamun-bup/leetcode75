class Solution {
public:
bool isvowel(char c){
    if (c=='a' or c=='e' or c=='i' or c=='o' or c=='u' or c=='A' or c=='E' or c=='I' or c=='O' or c=='U')
    {
        return true;
    }
    else
        return false;
}
    string reverseVowels(string s) {
        string temp;
        int n = s.size();
        for(int i = 0 ; i < n ; i++){
            if(isvowel(s[i])){
                temp.push_back(s[i]);
            
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(isvowel(s[i])){
                s[i] = temp.back();
                temp.pop_back();
            }
        }
        return s;
        
    }
};

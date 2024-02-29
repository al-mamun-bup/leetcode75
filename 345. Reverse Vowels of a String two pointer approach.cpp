class Solution {
public:
    bool isvowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

    string reverseVowels(string s) {
        int n = s.size();
        int i = 0;
        int j = n - 1;
        bool found1 = false;
        bool found2 = false;
        while (j >= i) {
            
            while( i <= j){
                if(isvowel(s[i])){
                    found1 = true;
                    break;
                }
                i++;
            }
            while( j >= i){
                if(isvowel(s[j])){
                    found2 = true;
                    break;
                }
                j--;
            }
            if(found1  and found2){
                swap(s[i],s[j]);
                i++,j--;
                found1 = false;
                found2 = false;
            }
            else if(found1==true and found2 == false){
                j--;
            }
            else if(found2==true and found1 == false){
                i++;
            }
            else if(found1==false and found2==false){
                i++,j--;
            }
            
        }

        return s;
    }
};

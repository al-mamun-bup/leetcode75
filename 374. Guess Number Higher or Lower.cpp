/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int lo = 1;
        int hi = n;
        int ans;
        while( hi>= lo){
            int mid = lo + (hi-lo) / 2;
            if(guess(mid)==0){
                ans = mid;
                break;
            }else if(guess(mid)==1){
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        return ans;
    }
};

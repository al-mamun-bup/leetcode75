#define ll long long
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        ll ans = -1;
        ll mn = 1e9;
        ll mx = -1e9;
        for(int i = 0 ; i < piles.size() ; i++){
            mn = min((ll)piles[i],mn);
            mx = max((ll)piles[i],mx);
        }
        ll lo = 1,hi=mx;
        while(hi >= lo){
            ll mid = (hi+lo) / 2;
            ll sum = 0;
            for(int i = 0 ; i < piles.size() ; i++){
                sum += piles[i] / mid;
                if(piles[i]%mid) sum++;
            }
            if(sum <= h){
                ans = mid;
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        return ans;
    }
};

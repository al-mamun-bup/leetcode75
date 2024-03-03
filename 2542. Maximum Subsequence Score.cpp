#define ll long long
class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<ll,ll>>pq;
        ll i = 0;
        for(auto it : nums1){
            pq.push({it,i});
            i++;
        }
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>, greater<pair<ll,ll>> >pq1;
        ll sum = 0;
        ll ans = -1;
        while(!pq.empty()){
            sum += pq.top().first;
            pq1.push({nums2[pq.top().second],pq.top().second});
            if(pq1.size()==k){
                ans = max(ans,sum*pq1.top().first);
                sum -= nums1[pq1.top().second];
                pq1.pop();
            }
            pq.pop();
        }
        return ans;
    }
};

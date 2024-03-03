#define ll long long
class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<ll,vector<ll>,greater<ll>>pq1,pq2;
        int cnt = 0;
        int n = costs.size();
        int i = 0, j = n-1;
        ll ans = 0;
        while(cnt < k){
            while(pq1.size() < candidates and i <= j){
                pq1.push(costs[i++]);
            }
            while(pq2.size() < candidates and j >= i){
                pq2.push(costs[j--]);
            }
            int a = pq1.size() > 0 ? pq1.top() : INT_MAX;
            int b = pq2.size() > 0 ? pq2.top() : INT_MAX;
            if(a <= b){
                ans += a;
                pq1.pop();
            }else{
                ans += b;
                pq2.pop();
            }
            cnt++;
        }
        return ans;
        
    }
};

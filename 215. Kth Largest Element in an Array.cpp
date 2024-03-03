class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto it : nums){
            pq.push(it);
        }
        int ans;
        while(!pq.empty()){
            k--;
            if(k==0){
                ans = pq.top();
                break;
            }
            pq.pop();
        }
        return ans;
    }
};

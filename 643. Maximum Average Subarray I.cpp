class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double ans = -1e9;
        int n = nums.size();
        bool found = false;
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
            if(i+1==k) found = true;
            if(found){
                ans = max(ans,sum/k*(1.0));
                sum -= nums[abs(k-i-1)];
            }
            
        }
        return ans;
    }
};

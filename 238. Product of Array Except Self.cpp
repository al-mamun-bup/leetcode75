class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        vector<int>ans;
        for(auto it : nums){
            prod *= it;
            ans.push_back(prod);
        }
        prod = 1;
        for(int i = nums.size() - 1; i > 0 ; i--){
            ans[i] = ans[i-1] * prod;
            prod *= nums[i];
        }
        ans[0] = prod;
        return ans;
    }
};

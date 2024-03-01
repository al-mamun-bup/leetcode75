class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0, j = n-1;
        int ans = 0;
        while(j > i){
            if(nums[i]+nums[j]==k){
                i++,j--;
                ans++;
            }else if(nums[i]+nums[j] < k){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        int i = 0,j = 0;
        int ans = 0;
        while(i < n){
            if(nums[i]==0){
                cnt++;
                i++;
            }
            else if(nums[i]==1){
                i++;
            }
            if(cnt > k){
                while(cnt != k and j < n){
                    if(nums[j]==0){
                        cnt--;
                    }
                    j++;
                }
            }
            ans = max(ans,i-j);
        }
        
        return ans;

    }
};

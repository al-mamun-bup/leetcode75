class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        if(count(nums.begin(),nums.end(),1)==nums.size()){
            return nums.size() - 1;
        }
        int n = nums.size();
        int i = 0;
        int j = 0;
        int cnt = 0;
        int ans = 0;
        while(i < n ){
            if(nums[i]==0){
                i++;
                cnt++;
            }else if(nums[i]==1){
                i++;
            }
            if(cnt > 1){
                while( j < n and cnt != 1){
                    if(nums[j]==0){
                        cnt--;
                    }
                    j++;
                } 
            }
            ans = max(ans,i-j-1);
        }
        return ans;
    }
};

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tot_sum = accumulate(nums.begin(),nums.end(),0);
        int left_sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            tot_sum -= nums[i];
            if(left_sum==tot_sum){
                return i;
            }
            left_sum += nums[i];
        }
        return -1;
        
    }
};

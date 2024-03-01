class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int ans = -1;
        int mnh = -1;
        while(j > i){
            mnh = min(height[i],height[j]);
            ans = max(ans,mnh*(j-i));
            if(height[i] < height[j]){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};

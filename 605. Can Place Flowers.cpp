class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        deque<int>dq;
        for(int i = 0 ; i < flowerbed.size(); i++){
            dq.push_back(flowerbed[i]);
        }
        dq.push_front(0);
        dq.push_back(0);
        int sz = dq.size();
        for(int i = 1 ; i < sz - 1; i++){
            if(dq[i]==0){
                if(  dq[i-1]==dq[i+1] and dq[i-1]==0){
                    dq[i] = 1;
                    n--;
                }
            }
            if(n <= 0){
                return true;
            }
        }
        return false;

    }
};

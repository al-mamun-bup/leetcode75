class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(auto it : asteroids){
            if(st.empty()){
                st.push(it);
            }
            else if(st.top() > 0 and it > 0 ){
                st.push(it);
            }else if(st.top() < 0 and it < 0){
                st.push(it);
            }else if(st.top() > 0 and it < 0 and st.top()==abs(it)){
                st.pop();
            }else{
                while( !st.empty() and st.top() > 0 and it < 0 and st.top() < abs(it)){
                    st.pop();
                }
                if(!st.empty() and st.top() > 0 and it < 0 and st.top()==abs(it)){
                    st.pop();
                }else if(!st.empty() and st.top() > 0 and it < 0 and st.top() > abs(it)){
                    continue;
                }else{
                    st.push(it);
                }
            
            }
        }
        vector<int>ans; 
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

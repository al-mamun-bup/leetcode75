class Solution {
public:
    string predictPartyVictory(string senate) {
      int n = senate.size();
      deque<int>dqr,dqd;
      for(int i = 0 ; i < n ; i++){
          if(senate[i]=='R'){
            dqr.push_back(i);
          }else{
            dqd.push_back(i);
          }
      }
      while(!dqr.empty() and !dqd.empty()){
          int r = dqr.front();
          int d = dqd.front();
          dqd.pop_front();
          dqr.pop_front();
          if(r < d){
            dqr.push_back(r+n);
          }else{
            dqd.push_back(d+n);
          }
      }
      if(dqr.empty()){
          return "Dire";
      }else{
          return "Radiant";
      }
    }
};

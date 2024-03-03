#define ll long long
class SmallestInfiniteSet {
public:
    ll cnt = 1;
    set<ll>ms;
    SmallestInfiniteSet() {
        ms.insert(cnt);
        cnt++;
    }
    
    int popSmallest() {
        ms.insert(cnt);
        cnt++;
        ll ans = *ms.begin();
        ms.erase(ms.begin());
        return ans;
    }
    
    void addBack(int num) {
        ms.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */

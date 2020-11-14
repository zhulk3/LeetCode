class Solution {
public:
    int hammingWeight(uint32_t n) {
    stack<int>store;
        int t=0;
        while(n){
            t=n%2;
            n/=2;
            store.push(t);
        }
        int cnt=0;
        while(store.size()){
            if(store.top()==1)
                cnt++;
            store.pop();
        }
        return cnt;
    }
};
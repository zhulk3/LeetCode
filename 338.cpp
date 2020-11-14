class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>ans;
        int cnt=0;
        for(int i=0;i<=num;i++){
            int t=i;
            while(t){
                if(t&1)
                    cnt++;
                t=t>>1;
            }
            ans.push_back(cnt);
            cnt=0;
        }
        return ans;
        
    }
};
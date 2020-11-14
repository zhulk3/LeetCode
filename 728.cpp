class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        bool flag=false;
        vector<int>ans;
        int j=0;
        for(int i=left;i<=right;i++){
            int t=i;
            while(t){
                j=t%10;
                if(j==0){
                    flag=true;
                    break;
                }
                    
                if(i%j!=0){
                    flag=true;
                    break;
                }
                 t/=10;   
            }
            if(!flag)
                ans.push_back(i);
            flag=false;
        }
        return ans;
        
    }
};
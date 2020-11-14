class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        int t=n;
        if(x==1.0)
            return x;
        if(n>0){
            while(t){
                ans*=x;
                t-=1;
            }
        }
        else if(n<0){
            while(t){
                ans/=x;
            t+=1;
            }
        }
        return ans;
    }
};
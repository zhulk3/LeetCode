class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        set<int>same;
        vector<int>ans;
        for(int i=0;i<T.size();i++)
            same.insert(T[i]);
        if(same.size()==1)
            return ans;
        bool insert=false;
        for(int i=0;i<T.size();i++){
            for(int j=i;j<T.size();j++){
                if(T[j]>T[i]){
                    ans.push_back(j-i);
                    insert=true;
                    break;
                }
            }
            if(!insert)
                ans.push_back(0);
            insert=false;
        }
        return ans;
    }
};
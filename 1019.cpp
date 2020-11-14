/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        ListNode*mov=head;
        if(head==NULL)
            return ans;
        int m=0;
        bool fin=false;
        while(mov->next){
            ListNode*f=mov->next;
            m=0;
            while(f){
                if(f->val>m)
                    m=f->val;
                if(m>mov->val){
                    ans.push_back(m);
                    fin=true;
                    break;
                }
            
                f=f->next;
            }
            if(!fin){
                if(m>mov->val)
                    ans.push_back(m);
                else
                ans.push_back(0);
            }
            
            fin=false;
            mov=mov->next;
        }
        ans.push_back(0);
        return ans;
    }
};
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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
            return NULL;
        int index=1;
        ListNode*move=head;
        vector<int>odd;
        vector<int>even;
        for(;move!=NULL;index++){
            if(index%2!=0)
                odd.push_back(move->val);
            else
                even.push_back(move->val);
            move=move->next;
        }
        ListNode*ans=new ListNode(odd[0]);
        move=ans;
        for(int i=1;i<odd.size();i++){
            move->next=new ListNode(odd[i]);
            move=move->next;
        }
        for(int i=0;i<even.size();i++){
            move->next=new ListNode(even[i]);
            move=move->next;
        }
        return ans;
    }
};
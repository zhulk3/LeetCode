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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        int start=1;
        stack<int>temp;
        if(head==NULL||m>n)
            return NULL;
        ListNode*ptr=head;
        
        while(start<m){
            ptr=ptr->next;
            ++start;
        }
        
        ListNode*s=ptr;
        int t=start;
        while(start<=n){
            temp.push(ptr->val);
            cout<<temp.top()<<' ';
            start++;
            ptr=ptr->next;
        }
        ptr=s;
        int j=0;
        while(t<=n&&temp.size()>0){
            j=temp.top();
            temp.pop();
            t++;
            ptr->val=j;
            ptr=ptr->next;
        }
        return head;
        
    }
};
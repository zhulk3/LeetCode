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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
            return head;
        int cnt=0;
        ListNode*mov=head;
        while(mov){
            cnt++;
            mov=mov->next;
        }
        ListNode*temp;
        mov=head;
        if(cnt==n){
            return head->next;
        }
        while(cnt>n+1){
            cnt--;
            mov=mov->next
        }

        temp=mov->next;
        mov->next=temp->next;
        return head; 
    }
};
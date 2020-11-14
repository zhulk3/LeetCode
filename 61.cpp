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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int>before;
        vector<int>after;
        if(head==NULL)
            return head;
        ListNode*mov=head;
        int cnt=0;
        while(mov){
            mov=mov->next;
            cnt++;
        }
        if(k>=cnt)
            k=k%cnt;
        int j=cnt-k;
        mov=head;
        while(j>0){
            before.push_back(mov->val);
            j--;
            mov=mov->next;
        }
        while(k>0&&mov){
            after.push_back(mov->val);
            k--;
            mov=mov->next;
        }
        mov=head;
        for(int i=0;i<after.size();i++){
            mov->val=after[i];
            mov=mov->next;
        }
        for(int i=0;i<before.size();i++){
            mov->val=before[i];
            mov=mov->next;
        }
        return head;
    }
};
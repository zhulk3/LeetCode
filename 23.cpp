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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode*root=NULL;
        if(lists.size()<=0)
            return root;
        root=new ListNode();
        int len=lists.size();
        ListNode*ptr=NULL;
        int min=0x7fffffff;
        int index=0;
        for(int i=0;i<len;i++){
            if(lists[i]&&lists[i]->val<min){
                min=lists[i]->val;
                ptr=lists[i];
                index=i; 
            }
                    
        }
        if(!ptr)
            return NULL;
        root->val=ptr->val;
        lists[index]=ptr->next;
        root->next=mergeKLists( lists);
        return root;                     
    }
};
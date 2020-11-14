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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL)
            return NULL;

        ListNode*one=headA;
        ListNode*two=headB;
        int c1=1;
        int c2=1;
        while(one){
            c1++;
            one=one->next;
        }
        while(two){
            c2++;
            two=two->next;
        }
        int diff=0;
        two=headB;
        one=headA;
        if(c1>c2){
            diff=c1-c2;
            while(diff){
                one=one->next;
                diff--;
            }
        }
            
        else{
            diff=c2-c1;
            
            while(diff){
                two=two->next;
                diff--;
            }
        }
        while(one!=two){
            one=one->next;
            two=two->next;
        }
        return one;    
    }
};
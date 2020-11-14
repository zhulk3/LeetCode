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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        stack<int>one;
        stack<int>two;
        ListNode*move=l1;
        while(move){
            one.push(move->val);
            move=move->next;
        }
        move=l2;
        while(move){
            two.push(move->val);
            move=move->next;
        }
        vector<int>middle;
        int sum=0;
        int in=0;
        int num=0;
        
        while(one.size()||two.size()){
            sum+=in;
            if(one.size()>0){
                sum+=one.top();
                one.pop();
            }
            if(two.size()>0){
                sum+=two.top();
                two.pop();
            }
            in=sum/10;
            num=sum%10;
            middle.push_back(num);
            sum=0;
            num=0;
        }
        if(in>0)
            middle.push_back(in);
        reverse(middle.begin(),middle.end());
        ListNode* head=new ListNode(middle[0]);
        move=head;
        for(int i=1;i<middle.size();i++){
            move->next=new ListNode(middle[i]);
            move=move->next;
        }
        return head;
    }
};
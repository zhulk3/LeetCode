#include <iostream>

using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
	bool isPalindrome(ListNode* head) {
		if (!head)
			return head;
		ListNode*fast = head;
		ListNode*slow = head;
		ListNode*temp;
		ListNode*last = NULL;
		while (fast->next&&fast->next->next) {
			fast = fast->next->next;
			temp = slow->next;
			slow->next = last;
			last = slow;		
			slow = temp;
			
		}
	}
};
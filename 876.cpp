#include <iostream>

using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
	ListNode* middleNode(ListNode* head) {
		ListNode*fast = head;
		ListNode*ans = head;
		while (ans != NULL && fast->next != NULL) {
			ans = ans->next;
			fast = fast->next->next;
		}
		return ans;
	}
};
#include <iostream>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (head == NULL)
			return head;
		ListNode*slow = head;
		ListNode*fast = slow->next;
		ListNode*temp;
		while (slow&&fast) {
			if (slow->val == fast->val) {
				temp = fast;
				fast = temp->next;
				slow->next = fast;
				delete temp;
			}
			else {
				slow = fast;
				fast = fast->next;
			}
		}

		return head;
	}
};

int main() {
	Solution a;
	ListNode*test = new ListNode(1);
	ListNode*mov = test;
	mov->next = new ListNode(1);
	mov = mov->next;
	mov->next = new ListNode(2);
	mov = mov->next;
	mov->next = new ListNode(3);
	mov = mov->next;
	mov->next = new ListNode(3);
	ListNode*ans = a.deleteDuplicates(test);
	mov = ans;

	while (mov) {
		cout << mov->val << ' ';
		mov = mov->next;
	}
	return 0;
}
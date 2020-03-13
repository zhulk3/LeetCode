#include <iostream>

using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
		if (!head)
			return head;
		ListNode*temp;
		ListNode*slow = head;
		ListNode*fast = slow->next;

		if (head->val == val) {
			temp = head;
			delete temp;
			head = head->next;
		}

		while (slow&&fast) {
			if (fast->val == val) {
				temp = fast;
				fast = temp->next;
				slow->next = fast;
				delete temp;
			}
			else {
				fast = fast->next;
				slow = slow->next;
			}
				
		}
		return head;
	}
};

int main() {
	ListNode*head = new ListNode(1);
	ListNode*mov = head;
	mov->next = new ListNode(2);
	mov = mov->next;
	mov->next = new ListNode(6);
	mov = mov->next;
	mov->next = new ListNode(3);
	mov = mov->next;
	mov->next = new ListNode(4);
	mov = mov->next;
	mov->next = new ListNode(5);
	mov = mov->next;
	mov->next = new ListNode(6);
	mov = head;

	Solution a;
	mov = a.removeElements(head,6);
	while (mov) {
		cout << mov->val << ' ';
		mov = mov->next;
	}
	return 0;
}
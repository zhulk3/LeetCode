#include <iostream>
#include <stack>

using namespace  std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };



  class Solution {
  public:
	  ListNode* reverseList(ListNode* head) {
		  stack<int>middle;
		  ListNode*ans = NULL;
		  ListNode*move;
		  ListNode*temp = head;
		  int c = 0;
		  while (temp) {
			  c = temp->val;
			  middle.push(c);
			  temp = temp->next;
		  }
		  if (middle.size() > 0) {
			  c = middle.top();
			  middle.pop();
			  ans = new ListNode(c);
			  move = ans;
		  }
		  while (middle.size() > 0) {
			  c = middle.top();
			  middle.pop();
			  temp = new ListNode(c);
			  move->next = temp;
			  move = move->next;
		  }
		  return ans;
	  }
  };





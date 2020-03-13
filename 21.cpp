#include<vector> 
#include<iostream>
#include <algorithm>
using namespace std;


  struct ListNode {
      int val;
      struct ListNode *next;
  };
 

#include<vector> 
#include<iostream>
#include <algorithm>
  using namespace std;


  class Solution {
  public:
	  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		  vector<int>middle;
		  ListNode*temp = l1;
		  ListNode*ans = NULL;
		  ListNode*move;
		  int c = 0;
		  while (temp) {
			  c = temp->val;
			  middle.push_back(c);
			  temp = temp->next;
			//  cout << c << ' ';
		  }
		  temp = l2;
		  while (temp) {
			  c = temp->val;
			  middle.push_back(c);
			  temp = temp->next;
		  }
		  sort(middle.begin(), middle.end());
		 // for (int i = 0; i < middle.size(); i++)
			//  cout << middle[i] << ' ';
		  if (middle.size() > 0) {
			  c = middle[0];
			  ans = (ListNode*)malloc(sizeof(ListNode));
			  ans->val = c;
			  ans->next = NULL;
			  temp = ans;
		  }
		  if (middle.size() > 1) {
			  for (int i = 1; i < middle.size(); i++) {
				  c = middle[i];
				  move = (ListNode*)malloc(sizeof(ListNode));
				  move->val = c;
				  move->next = NULL;
				  temp->next = move;
				  temp = temp->next;
			  }
		  }
		  return ans;
	  }
  };

  int main() {
	  ListNode*l1;
	  ListNode*l2;
	  ListNode*temp;
	  ListNode*t;
	  l1 = (ListNode*)malloc(sizeof(ListNode));
	  l1->val = 1;
	  l1->next = NULL;
	  temp = l1;
	  temp->next= (ListNode*)malloc(sizeof(ListNode));
	  temp->next->val = 2;
	  temp = temp->next;
	  temp->next= (ListNode*)malloc(sizeof(ListNode));
	  temp->next->val = 4;
	  temp->next->next = NULL;
	/*  temp = l1;
	  while (temp) {
		  cout << temp->val << ' ';
		  temp = temp->next;
	  }*/


	  l2 = (ListNode*)malloc(sizeof(ListNode));
	  l2->val = 1;
	  l2->next = NULL;
	  t = l2;
	  t->next = (ListNode*)malloc(sizeof(ListNode));
	  t->next->val = 3;
	  t = t->next;
	  t->next = (ListNode*)malloc(sizeof(ListNode));
	  t->next->val = 4;
	  t->next->next = NULL;
	/*  temp = l2;
	  while (temp) {
		  cout << temp->val << ' ';
		  temp = temp->next;
	  }*/

	  Solution a;
	  ListNode*ans = a.mergeTwoLists(l1, l2);
	  temp = ans;
	  while (temp) {
		  cout << temp->val << ' ';
		  temp = temp->next;
	  }
	  return 0;
  }
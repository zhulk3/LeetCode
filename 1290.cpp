#include <iostream>
#include <math.h>
#include<vector>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

class Solution {
public:
	int getDecimalValue(ListNode* head) {
		int num = 0;
		int part = 0;
		ListNode* move = head;
		vector<int>store;
		int temp;
		int len = 0;
		while (move != NULL) {
			temp = move->val;
			move = move->next;
			store.push_back(temp);
		}

		len = store.size();
		for (int i = 0; i < len; i++) {
			part = store[i] * pow(2, len - i-1);
			num += part;
		}
		return num;
	}
};
#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

class Solution {
public:
	int balancedStringSplit(string s) {
		int len = s.length();
		stack<char>store;
		char temp;
		int cnt = 0;
		for (int i = 0; i < len; i++) {
			temp = s[i];
			if (!store.empty()) {
				if (temp == 'L')
					if (store.top() == 'R') {
						store.pop();
						if (store.empty())
							cnt++;
					}
					else
						store.push(temp);
				if (temp == 'R')
					if (store.top() == 'L') {
						store.pop();
						if (store.empty())
							cnt++;
					}
					else
						store.push(temp);
			}
			else
				store.push(temp);
		}
		return cnt;
	}
};
#include<iostream>
#include <stack>

using namespace std;

bool comp(char a, char b) {
	if (a == '('&&b == ')')
		return true;
	else if (a == '['&&b == ']')
		return true;
	else if (a == '{'&&b == '}')
		return true;
	else
		return false;
}

class Solution {
public:
	bool isValid(string s) {
		int len = s.length();
		stack<char>store;
		char temp;
		char t;
		bool ans;
		for (int i = 0; i < len; i++) {
			temp = s[i];
			if (temp == '(' || temp == '[' || temp == '{')
				store.push(temp);
			else if (!store.empty()) {
				t = store.top();
				if (comp(temp, t))
					store.pop();
				else
					return false;
			}
			else
				return false;
		}
		if (!store.empty())
			return false;
		return true;
	}
};
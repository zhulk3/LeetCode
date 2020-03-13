#include <string>
#include <stack>
#include <iostream>

using namespace std;

class Solution {
public:
	string removeOuterParentheses(string S) {
		stack<char> ss;
		string ans = "";

		for (char c : S) {
			if (ss.empty() && c == '(') {
				ss.push(c);
			}
			else if (ss.size() == 1 && c == ')') {
				ss.pop();
			}
			else if (c == '(') {
				ss.push(c);
				ans += c;
			}
			else if (c == ')') {
				ss.pop();
				ans += c;
			}
		}

		return ans;
	}
};

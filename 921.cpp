#include <stack>
#include <iostream>
using namespace std;


class Solution {
public:
	int minAddToMakeValid(string S) {
		stack<char>s1;
		stack<char>s2;
		char temp;
		int count = 0;
		int len = S.length();
		for (int i = 0; i < len; i++) {
			temp = S[i];
			if (temp == '(')
				s1.push(temp);

		}

	}
};


#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <iostream>

using namespace std;

class Solution {
public:
	int maxNumberOfBalloons(string text) {
		int ans = 0;
		int len = text.length();
		char temp;
		stack<char>store_b;
		stack<char>store_a;
		stack<char>store_l;
		stack<char>store_o;
		stack<char>store_n;
		int len_b = 0;
		int len_a = 0;
		int len_l = 0;
		int len_o = 0;
		int len_n = 0;
		for (int i = 0; i < len; i++) {
			temp = text[i];
			if (temp == 'b')
				store_b.push(temp);
			if (temp == 'a')
				store_a.push(temp);
			if (temp == 'l')
				store_l.push(temp);
			if (temp == 'o')
				store_o.push(temp);
			if (temp == 'n')
				store_n.push(temp);
		}
		len_b = store_b.size();
		len_a = store_a.size();
		len_l = store_l.size();
		len_o = store_o.size();
		len_n = store_n.size();
		while (len_b > 0 && len_a > 0 && len_l > 1 && len_o > 1 && len_n > 0) {
			store_b.pop();
			store_a.pop();
			store_l.pop();
			store_l.pop();
			store_o.pop();
			store_o.pop();
			store_n.pop();
			ans++;
			len_b--;
			len_a--;
			len_l -= 2;
			len_o -= 2;
			len_n--;
		}
		return ans;
	}
};
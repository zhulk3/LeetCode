#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	bool isPalindrome(string s) {
		char c;
		if (s.length() == 0)
			return true;
		vector<char>store;
		for (int i = 0; i < s.length(); i++) {
			c = s[i];
			if (c >= 48 && c <= 57)
				store.push_back(c);

			else if (c >= 65 && c <= 90 || c >= 97 && c <= 122) {
				
				c = toupper(c);
			//	cout << c;
				store.push_back(c);
			}
		}
		cout << endl;
		for (int i = 0; i < store.size()/2 ; i++) {
			//cout << store[i] << ' '<<store[store.size() - i - 1] << endl;
			if (store[i] != (store[store.size() - i - 1]))
				return false;
		}
		return true;
	}
};

int main() {
	Solution a;
	string test = "A man, a plan, a canal: Panama";
	cout << a.isPalindrome(test);
	return 0;
}
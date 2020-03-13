#include <vector>
#include <stack>
#include <string>
#include <iostream>

using namespace  std;

class Solution {
public:
	string defangIPaddr(string address) {
		int len = address.length();
		string ans;
		for (int i = 0; i < len; i++) {
			if (address[i] != '.')
				ans = ans + address[i];
			else {
				ans += '[';
				ans += '.';
				ans += ']';
			}
		}
		return ans;
	}
};

int main() {
	string test = "1.1.1.1";
	Solution a;
	string ans = a.defangIPaddr(test);
	cout << ans << endl;
	return 0;
}
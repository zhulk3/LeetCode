#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	string freqAlphabets(string s) {
		string ans;
		int len = s.length();
		int sta = 0;
		while (sta < len) {
			if (sta + 2 < len&&s[sta + 2] == '#') {
				ans.push_back(char('a' + (s[sta] - '0') * 10 + (s[sta+1] - '0') - 1));
				cout << sta << ' ';
				sta += 3;
				

			}
			else {
				ans.push_back(char('a' + (s[sta] - '0') - 1));
				cout << sta << ' ';
				sta++;
			}
			

		}
		return ans;
	}
};

int main() {
	string test = "10#11#12";
	Solution a;
	string ans=a.freqAlphabets(test);
	cout << ans << endl;
	return 0;

}
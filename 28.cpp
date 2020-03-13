#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle) {
		string temp;
		for (int i = 0; i < haystack.length(); i++) {
			if (haystack[i] == needle[0]) {
				temp = haystack.substr(i, needle.length());
				//cout << temp << endl;
				if (temp == needle) {
					
					return i;
				}
				temp.clear();
			}
		}
		return -1;
	}
};

int main() {
	string s = "hello";
	string needle = "ll";
	Solution a;
	cout << a.strStr(s, needle);
	return 0;
}
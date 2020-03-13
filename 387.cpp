#include <string>
#include <map>
#include <iostream>

using namespace std;

class Solution {
public:
	int firstUniqChar(string s) {
		int len = s.length();
		int cnt = 0;
		int ans = 0;
		map<char, int>mp;
		pair<char, int>middle;
		char c;
		for (int i = 0; i < len; i++) {
			c = s[i];
			if (mp.find(c) == mp.end()) {
				middle.first = c;
				middle.second = 1;
				mp.insert(middle);
			}
			else
				mp[c]++;
		}
		for (int i = 0; i < len; i++) {
			c = s[i];
			if (mp[c] == 1) {
				ans = i;
				break;
			}
				
		}
		return ans;
	}
};
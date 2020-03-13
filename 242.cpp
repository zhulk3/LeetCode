#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	bool isAnagram(string s, string t) {
		int len1 = s.length();
		int len2 = t.length();
		vector<char>temp1;
		vector<char>temp2;
		for (int i = 0; i < len1; i++) {
			temp1.push_back(s[i]);
		}
		for (int i = 0; i < len2; i++) {
			temp2.push_back(t[i]);
		}
		sort(temp1.begin(), temp1.end());
		sort(temp2.begin(), temp2.end());
		if (temp1 == temp2)
			return true;
		return false;
	}
};
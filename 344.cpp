#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
	void reverseString(vector<char>& s) {
		int len = s.size();
		char temp;
		for (int i = 0; i < len / 2; i++) {
			temp = s[i];
			s[i] = s[len - i - 1];
			s[len - i - 1] = temp;
		}
	}
};
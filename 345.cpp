#include <vector>
#include <iostream>
#include<string>

using namespace std;

bool judge(char c) {
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		return true;
	return false;
}

class Solution {
public:
	string reverseVowels(string s) {
		vector<char>vowel;
		for (int i = 0; i < s.length(); i++) {
			if (judge(s[i]))
				vowel.push_back(s[i]);
		}
		int index = vowel.size() - 1;
		for (int i = 0; i < s.length(); i++) {
			if (judge(s[i])) {
				s[i] = vowel[index--];
			}
		}
		return s;
	}
};

int main() {
	Solution a;
	string test = "leetcode";
	cout << a.reverseVowels(test);
	return 0;
}
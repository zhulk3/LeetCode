#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	bool isIsomorphic(string s, string t) {
		vector<vector<int> >src;
		vector<vector<int> >dst;
		vector<int>temp;
		char c;
		if (s.length() == 0 && t.length() == 0)
			return true;
		if (s.length() != t.length())
			return false;
		for (int i = 0; i < s.length()-1; i++) {
			c = s[i];
			temp.push_back(i);
			s[i] = ' ';
			for (int j = i + 1; j < s.length(); j++) {
				if (s[j] == c) {
					temp.push_back(j);
					s[j] = ' ';
				}
			}
			src.push_back(temp);
			temp.clear();
		}
		for (int i = 0; i < t.length() - 1; i++) {
			c = t[i];
			temp.push_back(i);
			t[i] = ' ';
			for (int j = i + 1; j < t.length(); j++) {
				if (t[j] == c) {
					temp.push_back(j);
					t[j] = ' ';
				}
			}
			dst.push_back(temp);
			temp.clear();
		}
		if (src == dst)
			return true;
		return false;
	}
};

int main() {
	string s = "paper";
	string t = "title";
	Solution a;
	cout << a.isIsomorphic(s,t);
	return 0;
}
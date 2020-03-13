#include <map>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<string> findOcurrences(string text, string first, string second) {
		int len = text.length();
		string temp;
		vector<string>store;
		vector<string>ans;
		pair<string, string>two;
		map<string, string>mp;
		string f;
		string s;
		string t;
		int l = 0;
		for (int i = 0; i < len; i++) {
			if (text[i] != ' ')
				temp.push_back(text[i]);
			else {
				store.push_back(temp);
				temp.clear();
			}

		}
		store.push_back(temp);
		len = store.size();
		if (len < 3)
			return ans;
		for (int i = 0; i < len - 2; i++) {
			f = store[i];
			s = store[i + 1];
			t = store[i + 2];
			
			if (f == first && s == second)
				ans.push_back(t);
		}
		return ans;
	}
};

int main() {
	string test = "alice is a good girl she is a good student";
	string first = "a";
	string second = "good";
	Solution a;
	vector<string>ans = a.findOcurrences(test, first, second);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << endl;
	return 0;
}
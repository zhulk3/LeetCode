#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>
using namespace std;

class Solution {
public:
	vector<string> findWords(vector<string>& words) {
		set<char>a{ 'Q','W','E','R','T','Y','U','I','O','P' };
		set<char>b{ 'A','S','D','F','G','H','J','K','L' };
		set<char>c{ 'Z','X','C','V','B','N','M' };
		set<char>inv;
		int len = words.size();
		string temp;
		string last;
		vector<string>ans;
		char t;
		int l = 0;
		int sz = 0;
		bool over = false;
		for (int i = 0; i < len; i++) {
			last.clear();
			temp = words[i];
			//cout << temp << endl;
			transform(temp.begin(), temp.end(), back_inserter(last), ::toupper);
			l = last.length();
			//cout << last << endl;
			inv = a;
			sz = inv.size();
			for (int j = 0; j < l; j++) {
				t = last[j];
				//cout << t << ' ';
				inv.insert(t);
			}
			if (inv.size() == sz) {
				//cout << temp << endl;
				ans.push_back(temp);
				continue;
			}
			inv = b;
			sz = b.size();
			for (int j = 0; j < l; j++) {
				t = last[j];
				inv.insert(t);
			}
			if (inv.size() == sz) {
				ans.push_back(temp);
				//cout << temp << endl;
				continue;
			}
			inv = c;
			sz = c.size();
			for (int j = 0; j < l; j++) {
				t = last[j];
				inv.insert(t);
			}
			if (inv.size() == sz) {
				//cout << temp << endl;
				ans.push_back(temp);
				
			}
			last.clear();

		}
		return ans;
		temp.clear();
		
	}
};

int main() {
	//vector<string>test{ "Hello", "Alaska", "Dad", "Peace" };
	vector<string>test{ "b","asd","qut","v","b" };
	Solution a;
	vector<string>ans = a.findWords(test);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << endl;
	return 0;
}
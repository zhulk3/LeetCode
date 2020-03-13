#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <iterator>
#include <iostream>

using namespace std;

class Solution {
public:
	bool wordPattern(string pattern, string str) {
		int len1 = pattern.length();
		int len2 = str.length();
		vector<vector<int> >sit;
		vector<int>temp;
		string s;
		set<string>all;
		vector<string>store;
		set<string> last;
		char t;
		int before = 0;
		int after = 0;
		for (int i = 0; i < len1-1; i++) {
			t = pattern[i];
			
			for (int j = i + 1; j < len1; j++) {
				if (pattern[j] == t)
					temp.push_back(j);
			}
			if(temp.size()>1)
				sit.push_back(temp);
			temp.clear();
		}
	//	cout << sit[2][0] << endl;
		//cout << sit.size() << endl;
		for (int i = 0; i < sit.size(); i++) {
			for (int j = 0; j < sit[i].size(); j++) {
				cout << sit[i][j] << ' ';
			}
			cout << endl;
		}
		for (int i = 0; i < len2; i++) {
			if (str[i] != ' ')
				s.push_back(str[i]);
			else {
				store.push_back(s);
				s.clear();
			}
		}
		store.push_back(s);
		/*for (int i = 0; i < store.size(); i++)
			cout << endl << store[i];*/
		
		for (int i = 0; i < sit.size(); i++) {
			for (int j = 0; j < sit[i].size(); j++) {
				last.insert(store[sit[i][j]]);
			}
			if (last.size() != 1)
				return false;
			before = all.size();
			set_union(last.begin(), last.end(), all.begin(), all.end(), inserter(all,all.begin()));
			after = all.size();
			cout << before << ' ' << after << endl;
			if (after == before)
				return false;

			last.clear();
		}
		return true;
	}
};

int main() {
	Solution A;
	string patten = "abba";
	string str = "dog cat cat fish";
	cout << A.wordPattern(patten, str);
	return 0;
}
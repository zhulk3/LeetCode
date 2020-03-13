#include <string>
#include <vector>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<vector<int>> largeGroupPositions(string S) {
		vector<vector<int> >ans;
		int len = S.length();
		vector<int>part;
		int s = 0;
		int e = 0;
		vector<vector<char> >store;
		char t;
		char temp;
		
		vector<char>inv;
		t = S[0];
		inv.push_back(t);
		if (len <= 2)
			return ans;
		for (int i = 1; i < len; i++) {
			t = S[i];
			if (t == S[i - 1])
				inv.push_back(t);
			else {
				store.push_back(inv);
				inv.clear();
				inv.push_back(t);
			}
		}
		store.push_back(inv);
	/*	cout << store.size() << endl;
		for (int i = 0; i < store.size(); i++) {
			
			for (int j = 0; j < store[i].size(); j++)
				cout << store[i][j] << ' ';
			cout << endl;
		}
		*/
		if (store.size() < 1)
			return ans;
		s = 0;
		e = store[0].size() - 1;
		part.push_back(s);
		part.push_back(e);
		if(e-s>=2)
			ans.push_back(part);
		part.clear();
	//	cout << s << ' ' << e << endl;
		for (int i = 1; i < store.size(); i++) {
			s = e + 1;
			e = s + store[i].size() - 1;
			part.push_back(s);
			part.push_back(e);
			if (e - s >= 2) {
				ans.push_back(part);
				//cout << s << ' ' << e << endl;
			}
				
			part.clear();
			
		}
		return ans;
	}
};

int main() {
	Solution a;
	string test = "abcdddeeeeaabbbcd";
	vector<vector<int> > ans = a.largeGroupPositions(test);
	for (int i = 0; i < ans.size(); i++) {
		
			cout << ans[i][0] << ' ' << ans[i][1] << endl;
		
	}
	return 0;
}
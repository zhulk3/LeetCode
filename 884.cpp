#include <vector>
#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
	vector<string> uncommonFromSentences(string A, string B) {
		int len1 = A.length();
		int len2 = B.length();
		string temp;
		map<string, int>mp;
		pair<string, int>middle;
		map<string, int>::iterator ptr;
		vector<string>ans;
		for (int i = 0; i < len1; i++) {
			if (A[i] != ' ')
				temp.push_back(A[i]);
			else {
				if (mp.find(temp) == mp.end()) {
					middle.first = temp;
					middle.second = 1;
					mp.insert(middle);
					
				}
				else
					mp[temp] += 1;
				temp.clear();
			}

		}
		if (mp.find(temp) == mp.end()) {
			middle.first = temp;
			middle.second = 1;
			mp.insert(middle);
			temp.clear();
		}
		else
			mp[temp] += 1;
		temp.clear();

		for (int i = 0; i < len2; i++) {
			if (B[i] != ' ')
				temp.push_back(B[i]);
			else {
				if (mp.find(temp) == mp.end()) {
					middle.first = temp;
					middle.second = 1;
					mp.insert(middle);

				}
				else
					mp[temp] += 1;
				temp.clear();
			}

		}
		if (mp.find(temp) == mp.end()) {
			middle.first = temp;
			middle.second = 1;
			mp.insert(middle);
			temp.clear();
		}
		else
			mp[temp] += 1;
		temp.clear();

		for (ptr = mp.begin(); ptr != mp.end(); ptr++) {
			if (ptr->second == 1)
				ans.push_back(ptr->first);
		}
			
		return ans;
	}
};

int main() {
	Solution a;
	string  A = "this apple is sweet";
	string  B = "this apple is sour";
	vector<string>ans = a.uncommonFromSentences(A, B);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << endl;
	return 0;
	
}
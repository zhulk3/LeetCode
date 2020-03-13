#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
	bool isSubsequence(string s, string t) {
		vector<int>index;
		vector<int>temp;
		int j = 0;
		int z = -1;
		for (int i = 0; i < s.length(); i++) {
			for (j = z+1 ; j < t.length(); j++) {
				if (t[j] == s[i]) {
					index.push_back(j);
					z = j;
					break;
				}

			}
		}
		temp = index;
		sort(temp.begin(), temp.end());
		for (int i = 0; i < temp.size(); i++)
			cout << temp[i] << ' ';
		cout << endl;
		for (int i = 0; i < index.size(); i++)
			cout << index[i] << ' ';
			
		if (temp == index && temp.size() == s.length())
			return true;
		return false;
	}
};



int main() {
	string sub = "abc";
	string all = "ahbgdc";
	Solution a;
	cout << a.isSubsequence(sub, all);
	return 0;
}
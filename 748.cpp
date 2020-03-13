#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	string shortestCompletingWord(string licensePlate, vector<string>& words) {
		int len = licensePlate.length();
		int sz = words.size();
		string temp;
		vector<string>store;
		int l = 0;
		string lp;
		string ans;
		char t;
		int cnt = 0;
		for (int i = 0; i < sz; i++) {
			
			temp = words[i];
			//cout << temp << endl;
			l = temp.length();
			lp = licensePlate;
			cnt = 0;
			for (int j = 0; j < l; j++) {
				
				for(int k=0;k<len;k++)
					if (toupper(temp[j]) == toupper(lp[k])) {
						//cout << temp[j] << ' ';
						//cout << lp[k] << ' ';
						lp[k] = ' ';
						
						break;
					}
			}
			for (int j = 0; j < len; j++) {
				t = lp[j];
				if (t >= 65 && t<=90 || t >= 97 && t<=122)
					cnt++;
			}
			if (cnt ==0) {
				cout << temp << endl;
				store.push_back(temp);
			}
				
		}
		ans = store[0];
		if (store.size() <= 1)
			return ans;
		for (int i = 0; i < store.size(); i++) {
			if (store[i].length() <= ans.length())
				ans = store[i];
		}
		return ans;
	}
};

int main() {
	Solution a;

	string licensePlate = "Ay73565";
	vector<string>test{ "effect", "bed", "shoot", "something", "deal", "arm", "crime", "lay", "continue", "talk" };
	cout << a.shortestCompletingWord(licensePlate, test);
	return 0;
}
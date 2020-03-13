#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<string> commonChars(vector<string>& A) {
		vector<string>ans;
		int len = A.size();
		string temp;
		string::iterator it;
		string first = A[0];
		
		for (int i = 0; i < first.length(); i++) {
			
			temp = first[i];
			int c = 1;
			for (int j = 1; j < len; j++) {
				
				for (it = A[j].begin(); it != A[j].end(); it++) {
					if (first[i] == *it) {
						c++;
					}						
				}
			}
			
			if (c >= len) {
				ans.push_back(temp);
				
				string::iterator two;
				char t = temp[0];
				for (int j = 1; j < len; j++) {
					for (two = A[j].begin(); two != A[j].end(); two++) {
						if (*two==t) {
							A[j].erase(two);
							break;
						}
					}
				}
			}
			
			temp.clear();
		}
		return ans;
	}
};

int main() {
	Solution a;
	vector<string>test{ "cool","lock","cook" };
	vector<string>ans = a.commonChars(test);
	int len = ans.size();

	for (int i = 0; i < len; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}
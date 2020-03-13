#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<int> shortestToChar(string S, char C) {
		int len = S.length();
		int dis = 0;
		vector<int>distance;
		vector<int>after;
		
		
		for (int i = 0; i < len; i++) {
			for (int j = i ; j < len; j++) {
				if (S[j] == C) {
					distance.push_back(dis);
					dis = 0;
					break;	
				}	
				else
					dis++;
			}
		}
		distance.clear();
		dis = 0;
		reverse(S.begin(), S.end());
		len = S.length();
		cout << len << endl;
		for (int i = 0; i < len; i++) {
			cout << S[i];
			for (int j = i; j < len; j++) {
				if (S[j] == C) {
					distance.push_back(dis);
					dis = 0;
					break;
				}
				else
					dis++;
			}
		}
		return distance;
	}
};

int main() {
	vector<int>ans;
	Solution a;
	string test = "loveleetcode";
	char elem = 'e';
	ans = a.shortestToChar(test, elem);
	int len = ans.size();
	for (int i = 0; i < len; i++)
		cout << ans[i] << ' ';
	return 0;
}
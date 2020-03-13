#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
	vector<int> getRow(int numRows) {
		vector<vector<int> >ans(numRows+1);
		vector<int>real;
		for (int i = 0; i < numRows+1; i++) {
			ans[i].resize(i + 1);
		}

		for (int i = 0; i < numRows+1; i++) {
			ans[i][0] = 1;
			ans[i][i] = 1;
		}

		if (numRows > 1) {
			for (int i = 1; i < numRows+1; i++) {
				for (int j = 1; j < ans[i - 1].size(); j++) {
					ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
				}
			}
		}
		real = ans[numRows];
		return real;
	}
};

int main() {
	Solution a;
	vector<int>ans = a.getRow(3);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << ' ';
	return 0;
}

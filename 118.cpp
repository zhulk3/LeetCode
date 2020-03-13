#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int> >ans(numRows);
		for (int i = 0; i < numRows; i++) {
			ans[i].resize(i + 1);
		}
		
		for (int i = 0; i < numRows; i++) {
			ans[i][0] = 1;
			ans[i][i] = 1;
		}
			
		if (numRows > 1) {
			for (int i = 1; i < numRows; i++) {
				for (int j = 1; j < ans[i-1].size(); j++) {
					ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
				}
			}
		}
		return ans;
	}
};

int main() {
	Solution a;
	vector<vector<int> >ans = a.generate(5);
	int row = ans.size();
	int col = 0;
	cout << row << ' ' << col << endl;
	for (int i = 0; i < row; i++) {
		col = ans[i].size();
		for (int j = 0; j < col; j++) {
			cout << ans[i][j] << ' ';
			
		}
		cout << endl;
	}
	return 0;
}
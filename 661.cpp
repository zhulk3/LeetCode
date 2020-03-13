#include <vector>
#include <iostream>
using namespace std;

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
	vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
		int row = M.size();
		int col = M[0].size();
		vector<vector<int> >ans(row);
		for (int i = 0; i < row; i++)
			ans[i].resize(col);
		if (row == col && row == 1)
			return M;
		if (row == 1) {
			if (col == 2) {
				ans[0][0] = (M[0][0] + M[0][1]) / 2;
				ans[0][1] = (M[0][0] + M[0][1]) / 2;
				return ans;
			}
			if (col > 2) {
				ans[0][0] = (M[0][0] + M[0][1]) / 2;
				ans[0][col - 1] = (M[0][col - 2] + M[0][col - 1]) / 2;
				for (int i = 1; i < col - 1; i++)
					ans[0][i] = (M[0][i - 1] + M[0][i] + M[0][i + 1]) / 3;
			}
			return ans;
		}
		if (col == 1) {
			if (row == 2) {
				ans[0][0] = (M[0][0] + M[1][0]) / 2;
				ans[1][0] = (M[0][0] + M[1][0]) / 2;
				return ans;
			}
			if (row > 2) {
				ans[0][0] = (M[0][0] + M[1][0]) / 2;
				ans[row - 1][0] = (M[row - 2][0] + M[row - 1][0]) / 2;
				for (int i = 1; i < row - 1; i++)
					ans[i][0] = (M[i - 1][0] + M[i][0] + M[i + 1][0]) / 3;
			}
			return ans;
		}
		ans[0][0] = (M[0][0] + M[0][1] + M[1][0] + M[1][1]) / 4;
		ans[0][col - 1] = (M[0][col - 1] + M[0][col - 2] + M[1][col - 2] + M[1][col - 1]) / 4;
		ans[row - 1][0] = (M[row - 2][0] + M[row - 1][0] + M[row - 1][1] + M[row - 2][1]) / 4;
		ans[row - 1][col - 1] = (M[row - 1][col - 1] + M[row - 2][col - 1] + M[row - 2][col - 2] + M[row - 1][col - 2]) / 4;
		for (int i = 1; i < col - 1; i++)//first row;
			ans[0][i] = (M[0][i - 1] + M[0][i] + M[0][i + 1] + M[1][i - 1] + M[1][i] + M[1][i + 1]) / 6;
		for (int i = 1; i < col - 1; i++)//last row;
			ans[row - 1][i] = (M[row - 2][i - 1] + M[row - 2][i] + M[row - 2][i + 1] + M[row - 1][i - 1] + M[row - 1][i] + M[row - 1][i + 1]) / 6;
		for (int i = 1; i < row - 1; i++)//first col;
			ans[i][0] = (M[i - 1][0] + M[i][0] + M[i + 1][0] + M[i - 1][1] + M[i][1] + M[i + 1][1]) / 6;
		for (int i = 1; i < row - 1; i++)//last row;
			ans[i][col - 1] = (M[i - 1][col - 2] + M[i - 1][col - 1] + M[i][col - 2] + M[i][col - 1] + M[i + 1][col - 2] + M[i + 1][col - 1]) / 6;
		for (int i = 1; i < row - 1; i++) {
			for (int j = 1; j < col - 1; j++) {
				ans[i][j] = (M[i - 1][j - 1] + M[i - 1][j] + M[i - 1][j + 1] + M[i][j - 1] + M[i][j] + M[i][j + 1] + M[i + 1][j - 1] + M[i + 1][j] + M[i + 1][j + 1]) / 9;
			}
		}
		return ans;
	}
};


int main() {
	Solution a;
	vector<vector<int> >test{ {7},{9},{6} };
	vector<vector<int> >ans = a.imageSmoother(test);
	int row = ans.size();
	int col = ans[0].size();
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			cout << ans[i][j] << ' ';
		cout << endl;
	}
	return 0;
}
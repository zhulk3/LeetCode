#include <vector>
#include <iostream>

using namespace  std;

class Solution {
public:
	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
		
		int row = A.size();
		int col = A[0].size();
		vector<vector<int> >ans(row);
		for (int i = 0; i < row; i++)
			ans[i].resize(col);
		int temp = 0;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col/2; j++) {
				temp = A[i][j];
				A[i][j] = A[i][col - 1 - j];
				A[i][col - 1 - j] = temp;
			}
		}
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col ; j++) {
				ans[i][j] = 1 - A[i][j];
			}
		}
		return ans;
	}
};

int main() {
	Solution a;
	vector<vector<int> >test{ {1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0} };
	vector<vector<int> >ans = a.flipAndInvertImage(test);
	int row = ans.size();
	int col = ans[0].size();
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << ans[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
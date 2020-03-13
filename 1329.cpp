#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
		int row = mat.size();
		int col = mat[0].size();
		vector<vector<int> >ans(row);
		for (int i = 0; i < row; i++) {
			ans.resize(col);
		}
		for (int i = col - 1; i >= 0; i--) {
			for(int j=i;i<row)
		}

	}
};
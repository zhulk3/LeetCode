#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
		for (int i = 0; i < k; i++) {
			int row = grid.size();
			int col = grid[0].size();
			int rt = grid[row - 1][col - 1];
			vector<int>right(row - 1);
			for (int i = 0; i < row - 1; i++)
				right[i] = grid[i][col - 1];
			for (int i = 0; i < row; i++) {
				for (int j = col-1; j >0; j--) {
					grid[i][j] = grid[i][j - 1];
				}
			}
			for (int i = 1; i < row; i++) {
				grid[i][0] = right[i - 1];
			}
			grid[0][0] = rt;
		}
		return grid;
	}
};
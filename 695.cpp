#include <vector>

using namespace std;

void compute(int i, int j, int w, int h, int &area, vector<vector<int> > &grid) {
	if (i < 0 || i >= w || j < 0 || j >= h || grid[i][j] != 1)
		return;
	area++;
	grid[i][j] = 0;
	compute(i - 1, j, w, h, area, grid);
	compute(i + 1, j, w, h, area, grid);
	compute(i, j - 1, w, h, area, grid);
	compute(i, j + 1, w, h, area, grid);
}

class Solution {
public:
	int maxAreaOfIsland(vector<vector<int>>& grid) {
		int area = 0;
		int max_area = 0;
		int w = grid.size();
		int h = grid[0].size();
		for (int i = 0; i < w; i++) {
			for (int j = 0; j < h; j++) {
				if (grid[i][j] == 1) {
					compute(i, j, w, h, area, grid);
					if (area > max_area)
						max_area = area;
					area = 0;
				}
			}
		}
		return max_area;
	}
};
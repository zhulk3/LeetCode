#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	int islandPerimeter(vector<vector<int>>& grid) {
		int row = grid.size();
		int col = grid[0].size();
		int ans = 0;
		if (grid[0][0] == 1) {
			ans += 2;
			if (grid[0][1] == 0)
				ans++;
			if (grid[1][0] == 0)
				ans++;
		}
			
		if (grid[0][col - 1] == 1) {
			ans += 2;
			if (grid[0][col - 2] == 0)
				ans++ ;
			if (grid[1][col - 1] == 0)
				ans++;
		}
			
		if (grid[row - 1][0] == 1) {
			ans += 2;
			if (grid[row - 2][0] == 0)
				ans++;
			if (grid[row - 1][1]==0)
				ans++;
		}
			
		if (grid[row - 1][col - 1] == 1) {
			ans += 2;
			if (grid[row - 2][col - 1] == 0)
				ans++;
			if (grid[row - 1][col - 2] == 0)
				ans++;
		}
			
		//cout << ans;
		for (int i = 1; i < col - 1; i++)
			if (grid[0][i] == 1) {
				ans += 1;
				if (grid[0][i - 1] == 0)
					ans += 1;
				if (grid[0][i + 1] == 0)
					ans += 1;
			}
		//cout << ' ' << ans;
		for (int i = 1; i < col - 1; i++)
			if (grid[row-1][i] == 1) {
				ans += 1;
				if (grid[row-1][i - 1] == 0)
					ans += 1;
				if (grid[row-1][i + 1] == 0)
					ans += 1;
			}
		//cout << ' ' << ans;
		for (int i = 1; i < row - 1; i++)
			if (grid[i][0] == 1) {
				ans += 1;
				if (grid[i-1][0] == 0)
					ans += 1;
				if (grid[i+1][0] == 0)
					ans += 1;
			}

		for (int i = 1; i < row - 1; i++)
			if (grid[i][col-1] == 1) {
				ans += 1;
				if (grid[i - 1][col-1] == 0)
					ans += 1;
				if (grid[i + 1][col-1] == 0)
					ans += 1;
			}
		//cout << ' ' << ans;
		for (int i = 1; i < row-1; i++) {
			for (int j = 1; j < col - 1; j++) {
				if (grid[i][j] == 1) {
					//cout << i << ' ' << j << endl;
					if (grid[i - 1][j] == 0)
						ans += 1;
					if (grid[i + 1][j] == 0)
						ans += 1;
					if (grid[i ][j-1] == 0)
						ans += 1;
					if (grid[i ][j+1] == 0)
						ans += 1;
				}
			}
			//cout << ' ' << ans;
		}
		return ans;
	}
};

int main() {
	Solution a;
	vector<vector<int> >test{ {0, 1, 0, 0},{1, 1, 1, 0},{0, 1, 0, 0},{1, 1, 0, 0} };
	cout << a.islandPerimeter(test);
	return 0;
}

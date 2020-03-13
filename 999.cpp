#include <vector>

using namespace std;

class Solution {
public:
	int numRookCaptures(vector<vector<char>>& board) {
		int row = board.size();
		int col = board[0].size();
		int w = -1;
		int h = -1;
		int ans = 0;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if (board[i][j] == 'R') {
					w = i;
					h = j;
					break;
				}
			}
			if (w >= 0 && h >= 0)
				break;
		}
		for (int i = w; i >= 0; i--) {
			if (board[i][h] == 'B')
				break;
			if (board[i][h] == 'p') {
				ans++;
				break;
			}
		}
		for (int i = w; i < row; i++) {
			if (board[i][h] == 'B')
				break;
			if (board[i][h] == 'p') {
				ans++;
				break;
			}
		}

		for (int i = h; i >= 0; i--) {
			if (board[w][i] == 'B')
				break;
			if (board[w][i] == 'p') {
				ans++;
				break;
			}
		}
		for (int i = h; i < col; i++) {
			if (board[w][i] == 'B')
				break;
			if (board[w][i] == 'p') {
				ans++;
				break;
			}
		}
		return ans;

	}
};


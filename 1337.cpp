#include <vector>
#include <iostream>

using namespace std;

struct wk {
	int index;
	int solid;
};

class Solution {
public:
	vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
		int row = mat.size();
		int col = mat[0].size();
		wk temp;
		vector<int>ans(k);
		vector<wk>store;
		for (int i = 0; i < row; i++) {
			temp.index = i;
			temp.solid = 0;
			for (int j = 0; j < col; j++) {
				if (mat[i][j] == 1)
					temp.solid++;
			}
			store.push_back(temp);
		}
		for (int i = 0; i < row-1; i++) {
			for (int j = 0; j < row-1; j++) {
				if (store[j].solid > store[j + 1].solid) {
					temp.index = store[j].index;
					temp.solid = store[j].solid;
					store[j].index = store[j + 1].index;
					store[j].solid = store[j + 1].solid;
					store[j + 1].index = temp.index;
					store[j + 1].solid = temp.solid;
				}
			}
		}
		for (int i = 0; i < k; i++)
			ans[i] = store[i].index;
		return ans;

	}
};
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	int oddCells(int n, int m, vector<vector<int>>& indices) {
		int ri = 0;
		int ci = 0;
		int answer = 0;
		vector<vector<int> >test(n, vector<int>(m, 0));
		
		int len = indices.size();
		for (int i = 0; i < len; i++) {
			ri = indices[i][0];
			ci = indices[i][1];
			for (int t = 0; t < m; t++) {
				test[ri][t]++;
			}
			for (int k = 0; k < n; k++) {
				test[k][ci]++;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (test[i][j] % 2 != 0)
					answer++;
			}
		}
		return answer;
	}
};


#include<vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

struct node {
	int r;
	int c;
	int dis;
};

class Solution {
public:
	vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
		vector<vector<int> >ans;
		int temp = 0;
		vector<int>part;
		vector<node>middle;
		node one;
		int len = 0;
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				temp = abs(i - r0) + abs(j - c0);
				one.r = i;
				one.c = j;
				one.dis = temp;
				middle.push_back(one);
			}
		}
		len = middle.size();
		for (int i = 0; i < len-1; i++) {
			for (int j = 0; j < len - 1; j++) {
				if (middle[j].dis > middle[j + 1].dis) {
					one.r = middle[j].r;
					one.c = middle[j].c;
					one.dis = middle[j].dis;
					middle[j].r = middle[j + 1].r;
					middle[j].c = middle[j + 1].c;
					middle[j].dis = middle[j + 1].dis;
					middle[j + 1].r = one.r;
					middle[j + 1].c = one.c;
					middle[j + 1].dis = one.dis;
				}
			}
		}
		for (int i = 0; i < len; i++) {
			one.r = middle[i].r;
			one.c = middle[i].c;
			part.push_back(one.r);
			part.push_back(one.c);
			ans.push_back(part);
			part.clear();
		}
		return ans;
	}
};

int main() {
	Solution a;
	vector<vector<int> >ans = a.allCellsDistOrder(2, 3, 1, 2);
	int len = ans.size();
	for (int i = 0; i < len; i++) {
		cout << ans[i][0] << ' ' << ans[i][1] << endl;
	}
	return 0;
}
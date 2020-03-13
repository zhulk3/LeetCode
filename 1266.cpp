#include <math.h>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	int minTimeToVisitAllPoints(vector<vector<int>>& points) {
		int len = points.size();
		int x1 = 0;
		int y1 = 0;
		int x2 = 0;
		int y2 = 0;
		int diff1 = 0;
		int diff2 = 0;
		int cnt = 0;
		for (int i = 0; i < len-1; i++) {
			x1 = points[i][0];
			y1 = points[i][1];
			x2 = points[i + 1][0];
			y2 = points[i + 1][1];
			diff1 = abs(x1 - x2);
			diff2 = abs(y1 - y2);
			if (diff1 > diff2)
				cnt += diff1;
			else
				cnt += diff2;

		}
		return cnt;
	}
};
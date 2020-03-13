#include <vector>
#include <algorithm>
#include <iostream>

using namespace  std;

class Solution {
public:
	int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
		int len = distance.size();
		int s = start;
		int d = destination;
		int dis1 = 0;
		int dis2 = 0;
		for (int i = s; i <= d; i++)
			dis1 += i;
		if (dis1 > 0)
			dis1 -= s;
		int i = d;
		while (i != s) {
			dis2 += i;
			i++;
			if (i == len)
				i = 0;
		}
		dis2 += 1;
		if (dis1 > dis2)
			return dis2;
		return dis1;
	}
};

int main() {
	vector<int>test{ 1,2,3,4 };
	Solution a;
	int ans = a.distanceBetweenBusStops(test, 0, 3);
	cout << ans;
	return 0;
}
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
	int distributeCandies(vector<int>& candies) {
		int len = candies.size();
		int cnt = 0;
		if (len == 0)
			return cnt;
		else {
			cnt = 1;
			sort(candies.begin(), candies.end());
			for (int i = 1; i < len; i++) {
				if (candies[i] != candies[i - 1])
					cnt++;
			}
			if (cnt > len / 2)
				return len / 2;
			else
				return cnt;
		}
	}
};
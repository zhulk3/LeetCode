#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
	int numPairsDivisibleBy60(vector<int>& time) {
		int res = 0;
		int resmap[60] = { 0 };
		for (int i = 0; i < time.size(); i++)
		{
			int index = time[i] % 60;
			if (index == 0)
				res += resmap[0];
			else
				res += resmap[60 - index];
			resmap[index]++;
		}
		return res;
	}
};
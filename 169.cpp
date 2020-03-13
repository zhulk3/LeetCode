#include <vector>
#include <algorithm>
#include<cmath>
#include <iostream>

using namespace std;

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		int cnt = 1;
		int ans = 0;
		int len = nums.size();
		if (len == 1)
			return nums[0];
		for (int i = 1; i < len; i++) {
			if (nums[i] == nums[i - 1]) {
				cnt++;
				if (cnt > round(len / 2)) {
					ans = nums[i];
					break;
				}

			}
			else
				cnt = 1;
		}
		return ans;
	}
};
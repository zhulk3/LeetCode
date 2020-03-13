#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	bool checkPossibility(vector<int>& nums) {
		int len = nums.size();
		if (len <= 2)
			return true;
		for (int i = 2; i < len; i++) {
			if (nums[i] >= nums[i - 1])
				continue;
			else
				return false;
		}
		return true;
	}
};
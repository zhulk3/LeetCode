#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int len = nums.size();
		sort(nums.begin(), nums.end());
		for (int i = 0; i < len; i++) {
			if (nums[i] != i)
				return i;
		}
		return len;
	}
};
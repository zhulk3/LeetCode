#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int maximumProduct(vector<int>& nums) {
		int len = nums.size();
		int left = 1;
		sort(nums.begin(), nums.end());
		int pro = 1;
		pro= nums[len - 1] * nums[len - 2] * nums[len - 3];
		
		if (nums[0] < 0 && nums[1] < 0) {
			left = nums[0] * nums[1] * nums[len - 1];
			if (left > pro)
				pro = left;
		}
			

		return pro;
	}
};
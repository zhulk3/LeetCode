#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		int len = nums.size();
		for (int i = 0; i < len - k; i++) {
			for(int j=i+1;j<=i+k;j++){
				if (nums[i] == nums[j])
					return true;
			}
		}
		return false;
	}
};
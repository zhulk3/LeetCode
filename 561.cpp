#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
	int arrayPairSum(vector<int>& nums) {
		int len = nums.size();
		sort(nums.begin(), nums.end());
		int sum = 0;
		for (int i = 0; i < len; i++) {
			if(i%2==0)
				sum += nums[i];
		}
		return sum;
	}
};
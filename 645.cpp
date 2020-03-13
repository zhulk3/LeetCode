#include <map>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<int> findErrorNums(vector<int>& nums) {
		map<int, int>mp;
		pair<int, int>middle;
		vector<int>ans;
		int len = nums.size();
		for (int i = 0; i < len; i++) {
			middle.first = nums[i];
			middle.second = 1;
			if (mp.find(nums[i]) == mp.end())
				mp.insert(middle);
			else {
				mp[nums[i]] += 1;
				ans.push_back(nums[i]);
			}
		}
		for (int i = 0; i < len; i++) {
			if (mp.find(i + 1) == mp.end())
				ans.push_back(i + 1);
		}
		return ans;

	}
};

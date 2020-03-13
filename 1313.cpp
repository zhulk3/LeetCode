#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<int> decompressRLElist(vector<int>& nums) {
		int len = nums.size();
		int freq = 0;
		int val = 0;
		vector<int>ans;
		for (int i = 0; i < len; i+=2) {
			freq = nums[i];
			val = nums[i + 1];
			for (int j = 0; j < freq; j++) {
				ans.push_back(val);
			}
		}
		return ans;
	}
};
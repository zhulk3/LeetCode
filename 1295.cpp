#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	int findNumbers(vector<int>& nums) {
		vector<int>store;
		int len = nums.size();
		int temp = 0;
		int cnt = 0;
		int c = 0;
		for (int i = 0; i < len; i++) {
			temp = nums[i];
			while (temp != 0) {
				temp /= 10;
				c++;
			}
			if (c % 2 == 0 && c > 0)
				cnt++;
			c = 0;
		}
		return cnt;
	}
};
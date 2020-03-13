#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
	int dominantIndex(vector<int>& nums) {
		int len = nums.size();
		int ans = 0;
		vector<int>temp = nums;
		sort(nums.begin(), nums.end());
		int large = nums[len - 1];
		for (int i = 0; i < len - 1; i++) {
			if (large >= nums[i] * 2)
				continue;
			else
				return -1;
		}
		cout << large;
		for (int i = 0; i < len; i++)
			if (temp[i] == large) {
				ans = i;
				break;
			}
		return ans;
	}
};

int main() {
	Solution a;
	vector<int>test{ 1,0 };
	cout<<a.dominantIndex(test);
	return 0;
}
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
	int findMaxConsecutiveOnes(vector<int>& nums) {
		int max = 0;
		int temp = 0;
		int len = nums.size();
		for (int i = 0; i < len; i++) {
			if (nums[i] == 1) {
				temp++;
			}
				
			else {
				if (max < temp) {
					max = temp;
				}
				temp = 0;
			}
		}
		if (max < temp)
			max = temp;
		return max;
	}
};
/*
int main() {
	vector<int>arr = { 1,1,0,1,1,1 };
	Solution a;
	int ans = a.findMaxConsecutiveOnes(arr);
	cout << ans;
	return 0;
}
*/
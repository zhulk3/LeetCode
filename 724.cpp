#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	int pivotIndex(vector<int>& nums) {
		int len = nums.size();
		int left = 0;
		int right = 0;
		int ans = -1;
		if (len < 3)
			return -1;
		for (int i = 0; i < len - 1; i++) {
			for (int j = i-1; j >=0; j--) {
				left += nums[j];
			}
			for (int j = len-1; j >i; j--)
				right += nums[j];
			if (left == right) {
				ans = i;
				break;
			}
			left = 0;
			right = 0;
				
		}
		return ans;
	}
};

int main() {
	Solution a;
	vector<int>test{ 1,7,3,6,5,6 };
	cout << a.pivotIndex(test);
	return 0;
}
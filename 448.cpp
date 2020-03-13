#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<int> findDisappearedNumbers(vector<int>& nums) {

		vector<int> v;
		for (int i = 0; i < nums.size(); i++) {
			int j = abs(nums[i]) - 1;
			nums[j] = (abs(nums[j])*-1);

		}

		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] > 0) {
				v.push_back(i + 1);
			}
		}

		return v;

	}
};

int main() {
	vector<int>test{ 4,3,2,7,8,2,3,1 };
	Solution a;
	
	vector<int>ans = a.findDisappearedNumbers(test);
	int len = ans.size();
	
	
	for (int i = 0; i < len; i++)
		cout << ans[i] << ' ';
	return 0;
}

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		int left = 0;
		vector<int>ans;
		int right = numbers.size() - 1;
		while (true) {
			if (numbers[left] + numbers[right] > target)
				right--;
			else if (numbers[left] + numbers[right] < target)
				left++;
			else {
				ans.push_back(left + 1);
				ans.push_back(right + 1);
				return ans;
			}
		}
	}
};

int main() {
	Solution a;
	vector<int>test{ 2,7,11,15 };
	vector<int>ans = a.twoSum(test,9);
	int len = ans.size();
	for (int i = 0; i < len; i++)
		cout << ans[i] << ' ';
	return 0;
}
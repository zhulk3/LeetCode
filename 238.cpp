#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		int len = nums.size();
		vector<int>ans(len, 0);
		vector<int>pre(len, 1);
		vector<int>post(len, 1);
		pre[0] = 1;
		post[len - 1] = 1;
		for (int i = 1; i < len; i++)
			pre[i] = pre[i - 1] * nums[i - 1];
		for (int j = len - 2; j >= 0; j--)
			post[j] = post[j + 1] * nums[j + 1];
		for (int i = 0; i < len; i++)
			ans[i] = pre[i] * post[i];
		return ans;
	}
};

vector<int> productExceptSelf(vector<int>& nums) {
	vector<int> res;
	vector<int> arrPrefix(nums.size(), 0);
	vector<int> arrSuffix(nums.size(), 0);
	arrPrefix[0] = 1;
	for (int i = 1; i < nums.size(); i++)
		arrPrefix[i] = nums[i - 1] * arrPrefix[i - 1];
	arrSuffix[nums.size() - 1] = 1;
	for (int i = nums.size() - 2; i >= 0; i--)
		arrSuffix[i] = nums[i + 1] * arrSuffix[i + 1];
	for (int i = 0; i < nums.size(); i++)
		res.push_back(arrPrefix[i] * arrSuffix[i]);
	return res;
}
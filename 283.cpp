#include<stack>
#include <vector>
#include<iostream>

using namespace std;

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int len = nums.size();
		int temp = 0;
		int index = 0;
		stack<int>zeros;
		stack<int>ones;
		for (int i = len - 1; i >= 0; i--) {
			if (nums[i] != 0)
				ones.push(nums[i]);
			else
				zeros.push(nums[i]);
		}
		
		while (!ones.empty()) {
			temp = ones.top();
			nums[index++] = temp;
			ones.pop();
		}

		while (!zeros.empty()) {
			temp = zeros.top();
			nums[index++] = temp;
			zeros.pop();
		}
	}
};
/*
int main() {
	vector<int>arr = { 0,1,0,3,12 };
	Solution a;
	a.moveZeroes(arr);
	int len = arr.size();
	for (int i = 0; i < len; i++)
		cout << arr[i] << " ";
	return 0;
}
*/
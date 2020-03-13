#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int x = 0;
		for (int i = 0; i < nums.size(); i++)
			x = x ^ nums[i];
		return x;
	}
};



int main() {
	Solution a;
	vector<int>test{2,2,1 ,33,4,5,33,5,4,1,6};
	int ans = a.singleNumber(test);
	cout << ans << endl;
	return 0;
}
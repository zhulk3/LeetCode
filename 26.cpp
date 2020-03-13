#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		if (nums.size() <= 1)
			return nums.size();
		int c = nums[0];
		int cnt = 0;
		int t = 1;
		int index = 0;
		for (int i = 1; i < nums.size(); i++)
			if (nums[i] == c)
				t++;
			else
				break;
	//	cout << t << endl;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == c)
				nums[i] = nums[0];
			else
				c = nums[i];

		}
		
		sort(nums.begin(), nums.end());
	
		for (int i = 0; i < nums.size(); i++)
			if (nums[i] == nums[0])
				cnt++;
		int z = cnt;
		int v = 0;
		for (int i = 0; i < cnt ; i++)
			nums[v++] = nums[z++];
		
		
		
		for (int i = 0; i < nums.size(); i++)
			cout << nums[i] << ' ';
		cout << endl;
		return index;
	}
};

int main() {
	vector<int>test{ 1,1,2 };
	Solution a;
	int ans = a.removeDuplicates(test);
	cout << ans;
	return 0;
}

#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;
struct node {
	int left;
	int right;
};
class Solution {
public:
	int findPairs(vector<int>& nums, int k) {
		int len = nums.size();
		int ans = 0;
		sort(nums.begin(), nums.end());
		vector<node>store;
		node temp;
		for (int i = 0; i < len-1; i++) {
			for (int j = i+1; j < len; j++) {
				
				if (abs(nums[i] - nums[j]) == k) {
					ans++;
					temp.left = nums[i];
					temp.right = nums[j];
					store.push_back(temp);
					cout << nums[i] << ' ' << nums[j] << endl;
				}
					
				if(abs(nums[i] - nums[j])>k)
					break;
			}
		}
		cout << ans;
		if (store.size() <= 1)
			return ans;
		for (int i = 0; i < store.size()-1; i++) {
			for (int j = i+1; j < store.size(); j++) {
				if (store[i].left == store[j].left&&store[i].right == store[j].right&&abs(store[j].left)<999999999&&abs(store[j].right)<999999999) {
					store[j].left = -999999999;
					store[j].right = -999999999;
					ans--;
				}
					
			}
		}
		for (int i = 0; i < store.size(); i++)
			cout << store[i].left << ' ' << store[i].right << endl;
		return ans;
	}
};

int main() {
	Solution a;
	vector<int>test{ -1,0,0,1,0,0,-1};
	cout << a.findPairs(test,1);
	return 0;
}

#include <stack>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
		vector<int>ans;
		stack<int>temp;
		bool find = false;
		for (int i = 0; i < nums1.size(); i++) {
			for (int j = 0; j < nums2.size(); j++) {
				if (nums1[i] == nums2[j]) {
					for (int k = j; k < nums2.size(); k++) {
						if (nums2[k] > nums1[i]) {
							ans.push_back(nums2[k]);
							find = true;
							break;
						}
							
					}
					if (!find) {
						ans.push_back(-1);
						find = false;
						break;
					}
						
					else {
						find = false;
						break;
					}
						
				}
					
			}
		}
		return ans;
	}
};

int main() {
	Solution a;
	vector<int>arr { 1,3,4,2 };
	vector<int>sub { 4,1,2 };
	vector<int>ans = a.nextGreaterElement(sub, arr);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << ' ';
	return 0;
}
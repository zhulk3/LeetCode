#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		vector<int>temp1(nums1);
		vector<int>temp2(nums2);
		vector<int>ans;
		int len1 = temp1.size();
		vector<int>::iterator ptr;
		for (int i = 0; i < len1; i++) {
			for (ptr = temp2.begin(); ptr != temp2.end(); ptr++) {
				if (temp1[i] == *ptr) {
					ans.push_back(*ptr);
					temp2.erase(ptr);
					break;
				}
			}
		}
		return ans;
	}
};
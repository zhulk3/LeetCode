#include<iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		set<int>n1;
		set<int>n2;
		set<int>temp;
		vector<int>ans;
		int len1 = nums1.size();
		int len2 = nums2.size();
		for (int i = 0; i < len1; i++)
			n1.insert(nums1[i]);
		for (int i = 0; i < len2; i++)
			n2.insert(nums2[i]);
		set_intersection(n1.begin(), n1.end(), n2.begin(), n2.end(), inserter(ans, ans.begin()));
		set<int>::iterator ptr;
		for (ptr = temp.begin(); ptr != temp.end(); ptr++)
			ans.push_back(*ptr);

		return ans;
	}
};
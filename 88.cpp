#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int j = 0;
		for (int i = m; i < n+n; i++, j++) {
			nums1[i] = nums2[j];
		//	cout << nums1[i];
		}
			
		sort(nums1.begin(), nums1.end());
		
	}
};

int main() {
	Solution a;
	vector<int>t1{ 1,2,3,0,0,0 };
	vector<int>t2{ 4,5,6 };
	a.merge(t1, 3, t1, 3);
	for (int i = 0; i < 6; i++)
		cout << t1[i] << ' ';
	return 0;
}
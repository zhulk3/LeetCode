#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
		int len1 = arr1.size();
		int len2 = arr2.size();
		vector<vector<int> >store(len2);
		vector<int>ans;
		vector<int>left;
		bool flag = false;
		for (int i = 0; i < len2; i++) {
			store[i].push_back(arr2[i]);
		}
		for (int i = 0; i < len1; i++) {
			flag = false;
			for (int j = 0; j < len2; j++) {
				if (arr1[i] == store[j][0]) {
					store[j].push_back(arr1[i]);
					flag = true;
					break;
				}
				
			}
			if (!flag)
				left.push_back(arr1[i]);
		}
		for (int i = 0; i < len2; i++) {
			for (int j = 1; j < store[i].size(); j++) {
				ans.push_back(store[i][j]);
			}
		}
		if (left.size() > 0) {
			sort(left.begin(), left.end());
			for (int i = 0; i < left.size(); i++)
				ans.push_back(left[i]);
		}
		return ans;
	}
};

int main() {
	Solution a;
	vector<int>arr1{ 2,3,1,3,2,4,6,7,9,2,19 };
	vector<int>arr2{ 2,1,4,3,9,6 };
	vector<int>ans = a.relativeSortArray(arr1, arr2);
	int len = ans.size();
	for (int i = 0; i < len; i++)
		cout << ans[i] << ' ';
	return 0;
}

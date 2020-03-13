#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& A) {
		int len = A.size();
		vector<int>ans(len);
		int s = 0;
		int e = len - 1;
		for (int i = 0; i < len; i++) {
			if (A[i] % 2 == 0)
				ans[s++] = A[i];
			else
				ans[e--] = A[i];
		}
		return ans;
	}
};
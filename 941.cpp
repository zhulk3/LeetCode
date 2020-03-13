#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
	bool validMountainArray(vector<int>& A) {
		bool up = true;
		bool down = false;
		int len = A.size();
		int left = 0;
		int right = len - 1;
		if (len < 3)
			return false;
		for (int i = 1; i < len; i++) {
			if (A[i] > A[i - 1])
				continue;
			else {
				left = i - 1;
				break;
			}
		}
		for (int i = len - 1; i > 0; i--) {
			if(A[i]<A[i-1])
				continue;
			else {
				right = i;
				break;
			}
		}
		if (left == right)
			return true;
		return false;
	}
};
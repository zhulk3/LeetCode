#include<vector>
#include <iostream>

using namespace std;

class Solution {
public:
	bool isMonotonic(vector<int>& A) {
		int len = A.size();
		int i;
		if (len <= 1)
			return true;
		for (i = 1; i < len; i++) {
			if(A[i]>=A[i-1])
				continue;
			break;
		}
		if (i == len )
			return true;
		for (i = 0; i < len - 1; i++) {
			if(A[i]>=A[i+1])
				continue;
			return false;
		}
		return true;
	}
};

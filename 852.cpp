#include<iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int peakIndexInMountainArray(vector<int>& A) {
		int len = A.size();
		int peak = 0;
		int i;
		int up = 1;
		if (len < 3)
			return 1;
		for ( i = 1; i < len - 1; i++) {
			if(A[i-1]<=A[i]&&A[i]<=A[i+1])
				continue;
			up = 0;
			peak = i;
			break;
		}
		if (i == len - 1)
			return 0;
		for (i = peak+1; i < len-1; i++) {
			if(A[i]<=A[i-1]&&A[i]>=A[i+1])
				continue;
			return 0;
		}
		return peak;
	}
};
/*
²âÊÔ´úÂë
int main() {
	vector<int>arr = { 0,2,1,0 };
	Solution a;
	int ans=a.peakIndexInMountainArray(arr);
	cout << ans;
	return 0;
}
*/


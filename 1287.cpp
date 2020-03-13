#include <vector>
#include <iostream>

using namespace std;

class Solution {
	public int findSpecialInteger(int[] arr) {
		int cur = 0, max = 0, res = 0;
		if (arr.length == 1) return arr[0];
		if (arr == null || arr.length == 0) return 0;
		for (int i = 0; i < arr.length - 1; i++) {
			if (arr[i] == arr[i + 1]) {
				cur++;
			}
			else cur = 0;
			if (cur > max) {
				max = cur;
				res = arr[i];
			}
		}
		System.out.println(max);
		return res;
	}
}


int main() {
	Solution a;
	vector<int> test{ 1,2,3,3 };
	int ans = a.findSpecialInteger(test);
	cout << ans;
	return 0;
}
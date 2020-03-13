#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
	int findShortestSubArray(vector<int>& nums) {
		int len = nums.size();
		vector<int>temp = nums;
		int n = nums[0];
		int c = 1;
		int pivot = 0;
		int cnt = 0;

		for (int i = 0; i < len-1; i++) {
			n = nums[i];
			c = 1;
			for (int j = i+1; j < len; j++) {
				if (nums[j] == n)
					c++;
			}
			if (c >= cnt) {
				pivot = n;
				cnt = c;
			}
		}
		if (c >= cnt) {
			pivot = n;
			cnt = c;
		}
		n = 0;
		//cout << cnt << ' ' << pivot << endl;
		for (int t = cnt; t <= len; t++) {
			cout <<'t:'<< t << ' ';
			for (int i = 0; i <= len - t; i++) {
				//cout << i << ' ';
				for (int j = i; j < i+t; j++) {
					if (nums[j] == pivot)
						n++;
					
				}
				cout <<'n'<< n << endl;
				if (n == cnt)
					return t;
				n = 0;
			}
		}

		return cnt;

	}
};



int main() {
	//vector<int>test{ 1, 2,2, 3, 1 };
	//vector<int>test{ 1,2,2,3,1,4,2 };
	vector<int>test { 3,3,4 };
	Solution a;
	cout << a.findShortestSubArray(test);
	return 0;
}
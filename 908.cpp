#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
	int smallestRangeI(vector<int>& A, int K) {
		int len = A.size();
		int ave = 0;
		float sum = 0;
		int s1 = 0 - K;
		int e1 = K;
		int temp = 0;
		int diff = 0;
		int m = 0;
		int l = 0;
		vector<int>ans;
		for (int i = 0; i < len; i++) {
			sum += A[i];
		}
		
		ave = round(float(sum / len));
		cout << ave << endl;
		for (int i = 0; i < len; i++) {
			diff = ave - A[i];
			if (diff >= s1 && diff <= e1) {
				temp = A[i] + diff;
				ans.push_back(temp);
			}
			else if (diff > 0) {
				temp = A[i] + e1;
				ans.push_back(temp);
			}
			else {
				temp = A[i] + s1;
				ans.push_back(temp);
			}
		}
		for (int i = 0; i < len; i++)
			cout << ans[i] << ' ';
		m = ans[0];
		l = ans[0];
		for (int i = 1; i < len; i++) {
			if (ans[i] < m)
				m = ans[i];
			if (ans[i] > l)
				l = ans[i];
		}
		return l - m;
	}
};

int main() {
	vector<int>test{ 9,9,2,8,7 };
	Solution a;
	int ans = a.smallestRangeI(test,4);
	cout << ans;
	return 0;
}
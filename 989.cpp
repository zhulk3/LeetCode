#include <vector>
#include<algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
	vector<int> addToArrayForm(vector<int>& A, int K) {
		int temp = K;
		vector<int>ans;
		vector<int>storek;
		int l = 0;
		int r = 0;
		int h = 0;
		int t = 0;
		int len = A.size();
		while (temp > 0) {
			storek.push_back(temp % 10);
			temp /= 10;
		}
		reverse(storek.begin(), storek.end());
		l = A.size() - 1;
		r = storek.size() - 1;
		while (l >= 0 || r >= 0) {
			if (l >= 0)
				h += A[l];
			if (r >= 0)
				h += storek[r];
			h += t;
			//cout << h << ' ';
			t = 0;
			if (h >= 10) {
				t = (h - h % 10) / 10;
				h = h % 10;
			}
			ans.push_back(h);
			h = 0;
			l--;
			r--;
		}
		if (t > 0)
			ans.push_back(t);
		reverse(ans.begin(), ans.end());
		return ans;
	}
};

int main() {
	Solution a;
	vector<int>A{ 2,1,5 };
	int k =806;
	vector<int>ans = a.addToArrayForm(A, k);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << ' ';
	return 0;
}
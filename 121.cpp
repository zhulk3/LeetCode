#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int len = prices.size();
		int m = 0;
		int l = 0;
		int ans = 0;
		for (int i = 0; i < len; i++) {
			if (prices[i] < prices[m])
				m = i;
		}
		if (m == len - 1) {
			ans = 0;
			return ans;
		}
		else {
			l = m + 1;
			for (int i = m + 1; i < len; i++)
				if (prices[i] > prices[l])
					l = i;
		}
		ans = prices[l] - prices[m];
		return ans;
	}
};

int main() {
	Solution a;
	vector<int>test{ 7,6,4,3,1 };
	cout << a.maxProfit(test);
	return 0;
}
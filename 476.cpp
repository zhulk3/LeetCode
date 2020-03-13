#include <vector>
#include <algorithm>
#include <math.h>
#include <iostream>

using namespace std;

class Solution {
public:
	int findComplement(int num) {
		vector<int>ans;
		int temp = 0;
		int l = 0;
		while (num != 0) {
			temp = num % 2;
			ans.push_back(temp);
			num /= 2;
		}
	
		reverse(ans.begin(), ans.end());
		int len = ans.size();

		for (int i = 0; i < len; i++) {
			if (ans[i] == 0)
				ans[i] = 1;
			else
				ans[i] = 0;
		}
		for (int i = 0; i < len; i++) {
			l += ans[i] * pow(2, len - i - 1);
		}
		
		return l;
			
	}
};

int main() {
	int test = 4;
	Solution a;
	int ans = a.findComplement(test);
	cout << ans;
	return 0;
}
#include <iostream>
using namespace std;

class Solution {
public:
	int arrangeCoins(int n) {
		int ans = 0;
		int s = 0;
		if (n == 1)
			return 1;
		for (int i = 1; n>0; i++) {
			n -= i;
			if (n>0)
				ans++;
		}

		return ans;
	}
};

int main() {
	int a = 4.8*4.8;
	cout <<a << endl;
	return 0;
}
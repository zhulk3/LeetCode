#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
	int countPrimes(int n) {
		int ans = 0;
		int i = 0;
		int j = 0;
		for (i = n-1; i >= 2; i--) {
			for (j =2 ; j<= sqrt(i); j++) {
				if (i%j == 0)
					break;
			}
			if (j> sqrt(i))
				ans += 1;
		}
		return ans;

	}
};

int main() {
	Solution a;
	cout << a.countPrimes(10);
	return 0;
}
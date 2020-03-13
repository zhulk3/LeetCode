#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int subtractProductAndSum(int n) {
		vector<int>store;
		int temp = 0;
		int len = 0;
		int pro = 1;
		int sum = 0;
		int answer = 0;
		while (n > 0) {
			temp = n % 10;
			store.push_back(temp);
			n /= 10;
		}
		reverse(store.begin(), store.end());
		len = store.size();
		
		for (int i = 0; i < len; i++) {
			pro *=store[i];
			sum += store[i];
		}
		answer = pro - sum;
		return answer;
	}
};

int main() {
	Solution a;
	int n = 234;
	int ans=a.subtractProductAndSum(n);
	cout << endl<<ans;
	return 0;
}
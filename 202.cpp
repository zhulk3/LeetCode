#include <vector>
#include <map>
#include <iostream>

using namespace std;

class Solution {
public:
	bool isHappy(int n) {
		int temp = 0;
		map<int, int>mp;
		pair<int, int>middle;
		vector<int>store;
		int t = 0;
		while (temp!=n) {
			cout << n << endl;
			temp = n;
			if (mp.find(n) == mp.end()) {
				middle.first = n;
				middle.second = 1;
				mp.insert(middle);
			}
			else
				return false;
			while (n != 0) {
				t = n % 10;
				store.push_back(t);
				n /= 10;
			}
			reverse(store.begin(), store.end());
			n = 0;
			for (int i = 0; i < store.size(); i++) {
				n += store[i] * store[i];
			}
			store.clear();
			if (n == 1)
				return true;
		}
		return false;
	}
};

int main() {
	Solution a;
	cout << a.isHappy(2);
	return 0;
}
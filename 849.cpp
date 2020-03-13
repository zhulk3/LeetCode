#include<vector>
#include <iostream>

using namespace std;

class Solution {
public:
	int maxDistToClosest(vector<int>& seats) {
		int ans = 0;
		int len = seats.size();
		int big_size = 0;
		int before = 0;
		int after = 0;
		vector<vector<int> >store(len - 1);
		int cnt = 0;
		for (int i = 0; i < len - 1; i++) {
			if (seats[i] == 1) {
				for (int j = i + 1; j < len; j++) {
					if (seats[j] == 0)
						cnt++;
					else
						break;
				}
			}
			else
				continue;
			if (cnt != 0) {
				store[i].resize(cnt);
				cnt = 0;
			}
		}
		//cout << store.size();
		for (int i = 0; i < store.size(); i++) {
			if (store[i].size() > big_size)
				big_size = store[i].size();
		//	cout << store[i].size() << ' ';
		}
		ans = (big_size - 1) / 2;
		for (int i = 0; i<len; i++) {
			if (seats[i] == 0)
				after++;
			else
				break;
		}
		for (int j = len - 1; j >= 0; j--) {
			if (seats[j] == 0)
				before++;
			else
				break;
		}
		if (ans < after)
			ans = after;
		if (ans < before)
			ans = before;
		return ans;
	}
};

int main() {
	Solution a;
	vector<int>test{ 1,0,0,0 };
	cout << a.maxDistToClosest(test);
	return 0;
}
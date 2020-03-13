#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
	int lastStoneWeight(vector<int>& stones) {
		sort(stones.begin(), stones.end());
		int len = stones.size();
		int diff = 0;
		int last_one = 0;
		int last_two;
		while (stones.size() > 1) {
			last_one = stones.back();
			stones.pop_back();
			last_two = stones.back();
			stones.pop_back();
			diff = last_one - last_two;
			stones.push_back(diff);
			sort(stones.begin(), stones.end());
		}
		return stones.front();
	}
};

int main() {
	Solution a;
	vector<int>test{ 2,7,4,1,8,1 };
	int ans = a.lastStoneWeight(test);
	cout << ans << endl;
	return 0;
}
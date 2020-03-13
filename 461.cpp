#include <vector>
#include <algorithm>
#include <math.h>
#include <iostream>

using namespace std;

class Solution {
public:
	int hammingDistance(int x, int y) {
		vector<int>first;
		vector<int>second;
		int t1 = 0;
		int t2 = 0;
		int len1 = 0;
		int len2 = 0;
		int diff = 0;
		int cnt = 0;
		while (x != 0) {
			t1 = x % 2;
			first.push_back(t1);
			x /= 2;
		}
		while (y != 0) {
			t2 = y % 2;
			second.push_back(t2);
			y /= 2;
		}
		len1 = first.size();
		len2 = second.size();
		diff = abs(len1- len2);
		if (len1 > len2) {
			for (int i = 0; i < diff; i++)
				second.push_back(0);
		}
		else
			for (int i = 0; i < diff; i++)
				first.push_back(0);
		reverse(first.begin(), first.end());
		reverse(second.begin(), second.end());
		len1 = first.size();
		for (int i = 0; i < len1; i++)
			if (first[i] != second[i])
				cnt++;
		return cnt;
	}
};

int main() {
	Solution a;
	int ans=a.hammingDistance(1, 4);
	cout << ans;
	return 0;
}
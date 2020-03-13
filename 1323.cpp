#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
	int maximum69Number(int num) {
		vector<int>store;
		int answer = 0;
		bool stop = true;
		int temp;
		int len = 0;
		while (num != 0) {
			temp = num % 10;
			store.push_back(temp);
			num /= 10;
		}
		reverse(store.begin(), store.end());
		len = store.size();
		for (int i = 0; i < len; i++) {
			if (store[i] == 6&&stop) {
				store[i] = 9;
				stop = false;
			}
				
			answer *= 10;
			answer += store[i];
		}
		return answer;
	}
};
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<int> sumZero(int n) {
		int len = n / 2;
		vector<int>answer;
		for (int i = 0; i < len; i++) {
			answer.push_back(i + 1);
			answer.push_back(0 - i - 1);
		}
		if (n % 2 != 0)
			answer.push_back(0);
		return answer;
		
	}
};
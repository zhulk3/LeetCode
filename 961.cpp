#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
	int repeatedNTimes(vector<int>& A) {
		int len = A.size();
		int answer = 0;
		sort(A.begin(), A.end());
		for (int i = 0; i < len - 1; i++) {
			if (A[i] == A[i + 1])
				answer = A[i];
		}
		return answer;
	}
};
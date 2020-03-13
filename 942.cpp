#include <string>
#include<vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<int> diStringMatch(string S) {
		int len = S.length();
		int N = len;
		int B = 0;
		vector<int>answer;
		for (int i = 0; i < len; i++) {
			if (S[i] == 'I')
				answer.push_back(B++);
			else
				answer.push_back(N--);
		}
		answer.push_back(N);
		return answer;
	}
};
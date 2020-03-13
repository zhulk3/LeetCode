#include <string>
#include <set>
#include <iostream>

using namespace std;

class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int len1 = J.length();
		int len2 = S.length();
		int cnt = 0;
		for (int i = 0; i < len2; i++) {
			for (int j = 0; j < len1; j++) {
				if (S[i] == J[j])
					cnt++;
			}
		}
		return cnt;
	}
};
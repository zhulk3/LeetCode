#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	bool isOneBitCharacter(vector<int>& bits) {
		int one = 0;
		int two = 0;
		int len = bits.size();
		if (len % 2 == 0)
			return false;
		for (int i = 0; i < len-1; i++) {
			if (i % 2 == 0)
				one = bits[i];
			else
				two = bits[i];
			if (i % 2 != 0) {
				if (one == 1 && two == 0 || one == 1 && one == 1) {
					one = 0;
					two = 0;
				}
				else
					return false;
			}
		}
		return true;
	}
};
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		int len = digits.size();
		for (int i = len - 1; i >= 0; i++) {
			if(++digits[i]<=9)
				break;
			else {
				digits[i] = 0;
			}
		}
	}
};
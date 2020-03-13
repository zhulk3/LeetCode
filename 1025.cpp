#include <iostream>

using namespace std;

class Solution {
public:
	bool divisorGame(int N) {
		bool ans = true;
		int t1 = 0;
		int t2 = 0;
		int temp1 = 0;
		int temp2 = 0;
		while (true) {
			temp1 = N ;
			if (temp1 == 1)
				return true;
			for (int i = temp1-1; i > 1; i--) {
				t1 = temp1 % i;
				if (t1 == 0) {
					N = N - i;
					break;
				}	 
			}
			
			temp2 = N;
			if (temp2 == 1)
				return false;
			for (int i = temp2 - 1; i > 1; i--) {
				t2 = temp2 % i;
				if (t2 == 0) {
					N = N - i;
					break;
				}
			}
		}

	}
};